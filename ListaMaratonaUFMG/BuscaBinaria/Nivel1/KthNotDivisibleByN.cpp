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
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long qtd_blocos = k / (n - 1);
        long long resto = k % (n - 1);

        if (resto == 0) {
            cout << (qtd_blocos * n) - 1 << endl;
        } else {
            cout << (qtd_blocos * n) + resto << endl;
        }
    }


    return 0;
}