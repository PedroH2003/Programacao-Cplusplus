#include<bits/stdc++.h>
 
using namespace std;
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define REP(i, a, b) for(int i=a ; i<b; i++)
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int mod = 1e9+7;
const int MAX = 1e3+10;

int main() { _

    int n,k; cin >> n >> k;
    vector<int> v(n); REP(i, 0, n) cin >> v[i];
    vector<int> aux(k); REP(i, 0, k) cin >> aux[i];

    REP(i, 0, k){
        auto num = lower_bound(v.begin(), v.end(), aux[i]);
        if(*num == aux[i]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}