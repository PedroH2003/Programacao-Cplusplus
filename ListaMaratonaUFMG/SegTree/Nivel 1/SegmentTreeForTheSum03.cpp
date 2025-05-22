#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5+10, INF = 0x3f3f3f3f;

vector<int> v(MAX);
vector<long long> seg(4*MAX);

long long build(int p, int l, int r){
    if(l == r) return seg[p] = v[l];
    int m = (l + r) / 2;
    return seg[p] = build(p*2, l, m) + build(p*2+1, m+1, r);
}

long long update(int i, int x, int p, int l, int r){
    if(i < l or i > r) return seg[p];
    if(l == r) return seg[p] = x;
    int m = (l + r) / 2;
    return seg[p] = update(i, x, p*2, l, m) + update(i, x, p*2+1, m+1, r);
}

long long query(int a, int b, int p, int l, int r){
    if(b < l or r < a) return 0;
    if(a <= l and r <= b) return seg[p];
    int m = (l + r) / 2;
    return query(a, b, p*2, l, m) + query(a, b, p*2+1, m+1, r);
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
            long long ans = query(a, b-1, 1, 0, n-1);
            cout << ans << endl;
        }
    }

    return 0;
}