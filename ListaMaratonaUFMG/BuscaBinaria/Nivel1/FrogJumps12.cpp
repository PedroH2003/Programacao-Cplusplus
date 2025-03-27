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

string s;
bool val(int d){
    int cont = 1;
    REP(i, 0, s.size()){
        if(s[i] == 'L'){
            cont++;
        }
        else{
            cont = 1;
        }

        if(cont > d) return false;
    }
    return true;
}

int main() { _
    int t; cin >> t;
    while(t--){
        cin >> s;
        int l = 1, r = 2e5+10, ans=0;
        while(l <= r){
            int m = (l + r) / 2;

            if(val(m)){
                ans = m;
                r = m - 1;
            }
            else l = m + 1;
        }
        cout << ans << endl;
    }

    return 0;
}