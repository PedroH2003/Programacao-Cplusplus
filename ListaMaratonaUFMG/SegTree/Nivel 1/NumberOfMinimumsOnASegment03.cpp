#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5+10, INF = 0x3f3f3f3f;

vector<int> v(MAX);
vector<pair<int,int>> seg(4*MAX);

pair<int,int> combina(pair<int,int> a, pair<int,int> b){
    if(a.first > b.first) return b;
    if(a.first < b.first) return a;
    return {a.first, a.second + b.second};
}

pair<int,int> build(int p, int l, int r){
    if(l == r) return seg[p] = {v[l], 1};
    int m = (l + r) / 2;
    return seg[p] = combina(build(p*2, l, m), build(p*2+1, m+1, r));
}

pair<int,int> update(int i, int x, int p, int l,  int r){
    if(i < l or i > r) return seg[p];
    if(l == r) return seg[p] = {x, 1};
    int m = (l + r) / 2;
    return seg[p] = combina(update(i, x, p*2, l, m), update(i, x, p*2+1, m+1, r));
}

pair<int,int> query(int a, int b, int p, int l, int r){
    if(b < l or a > r) return {INF, 1};
    if(a <= l and r <= b) return seg[p];
    int m = (l + r) / 2;
    return combina(query(a, b, p*2, l, m), query(a, b, p*2+1, m+1, r));
}

int main(){

    int n,m; cin >> n >> m;
    for(int i=0; i<n; i++) cin >> v[i];
    build(1, 0, n-1);

    while(m--){
        int t,a,b; cin >> t >> a >> b;
        if(t == 1){
            update(a, b, 1, 0, n-1);
        }else{
            pair<int,int> ans = query(a, b-1, 1, 0, n-1);
            cout << ans.first << " " << ans.second << endl;
        }
    }

    return 0;
}