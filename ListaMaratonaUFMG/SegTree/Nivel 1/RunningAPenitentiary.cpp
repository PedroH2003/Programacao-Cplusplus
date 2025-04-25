#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f, MAX = 2e5+10;
const long long LINF = 0x3f3f3f3f3f3f3f3fll;

vector<pair<int,int>> v(MAX); 
vector<pair<int,int>> seg(4*MAX);

pair<int,int> build(int p, int l, int r){
    if(l == r) return seg[p] = v[l];
    int m = (l + r) / 2;

    pair<int,int> aux1 = build(p*2, l, m);
    pair<int,int> aux2 = build(p*2+1, m+1, r);
    int num = max(aux1.first, aux2.first);
    int num2= min(aux1.second, aux2.second);
    return seg[p] = {num, num2};
}

pair<int,int> update(int i, pair<int,int> x, int p, int l, int r){
    if(i < l or r < i) return seg[p];
    if(l == r) return seg[p] = x;

    int m = (l + r) / 2;
    pair<int,int> aux1 = update(i, x, p*2, l, m);
    pair<int,int> aux2 = update(i, x, p*2+1, m+1, r);
    int num = max(aux1.first, aux2.first);
    int num2= min(aux1.second, aux2.second);
    return seg[p] = {num, num2};
}

pair<int,int> query(int a, int b, int p, int l, int r){
    if(b < l or a > r) return {-INF, INF};
    if(a <= l and r <= b) return seg[p];

    int m = (l + r) / 2;
    pair<int,int> aux1 = query(a, b, p*2, l, m);
    pair<int,int> aux2 = query(a, b, p*2+1, m+1, r);
    int num = max(aux1.first, aux2.first);
    int num2= min(aux1.second, aux2.second);
    return {num, num2};
}

int main(){
    int n,m; cin >> n >> m;
    for(int i=0; i<n; i++){
        int a,b; cin >> a >> b;
        v[i] = {a, b};
    }
    build(1, 0, n-1);

    while(m--){
        char t; cin >> t;
        if(t == 'C'){
            int i,a,b; cin >> i >> a >> b; i--;
            update(i, {a, b}, 1, 0, n-1);
        }else{
            int a,b; cin >> a >> b; a--,b--;
            pair<int,int> ans = query(a, b, 1, 0, n-1);
            if(ans.first > ans.second) cout << 0 << endl;
            else{
                long long aux = (ans.second - ans.first) + 1;
                cout << aux << endl;
            }
        }
    }



    return 0;
}