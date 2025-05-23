#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5+10, INF = 0x3f3f3f3f;

vector<pair<int,int>> v(MAX);
vector<pair<int,int>> seg(4*MAX);

pair<int,int> build(int p, int l, int r){
    if(l == r) return seg[p] = v[l];
    int m = (l + r) / 2;
    pair<int,int> a1 = build(p*2, l, m);
    pair<int,int> a2 = build(p*2+1, m+1, r);
    return seg[p] = {max(a1.first, a2.first), min(a1.second, a2.second)};
}

pair<int,int> update(int i, pair<int,int> x, int p, int l, int r){
    if(i < l or i > r) return seg[p];
    if(l == r) return seg[p] = x;
    int m = (l + r) / 2;
    pair<int,int> a1 = update(i, x, p*2, l, m);
    pair<int,int> a2 = update(i, x, p*2+1, m+1, r);
    return seg[p] = {max(a1.first, a2.first), min(a1.second, a2.second)};    
}

pair<int,int> query(int a, int b, int p, int l, int r){
    if(b < l or a > r) return {-INF, INF};
    if(a <= l and r <= b) return seg[p];
    int m = (l + r) / 2;
    pair<int,int> a1 = query(a, b, p*2, l, m);
    pair<int,int> a2 = query(a, b, p*2+1, m+1, r);
    return {max(a1.first, a2.first), min(a1.second, a2.second)};        
}

int main(){

    int n,q; cin >> n >> q;
    for(int i=0; i<n; i++){
        int x,y; cin >> x >> y;
        v[i] = {x, y};
    }
    build(1, 0, n-1);

    while(q--){
        char t; cin >> t;
        if(t == 'C'){
            int i,a,b; cin >> i >> a >> b;
            update(i-1, {a, b}, 1, 0, n-1);
        }else{
            int a,b; cin >> a >> b;
            pair<int,int> ans = query(a-1, b-1, 1, 0, n-1);
            if(ans.first > ans.second) cout << 0 << endl;
            else cout << (ans.second - ans.first) + 1 << endl;
        }
    }


    return 0;
}