#include <bits/stdc++.h>

using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define REP(i, a, b) for(int i=a;i<b;i++)
typedef long long ll;
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fll;
const int mod = 1e9+7;
const int MAX = 1e3+10;

int main(){ _
    int k,n; cin >> k >> n;
    
    string ans = "";
    int maximo = k * 3;
    int minimo = (k * 2) - 1;

    if(n <= maximo and n >= minimo){
        char c = 'X';
        for(int i=0; i<minimo; i++){
            ans += c;
            if(c == 'X') c = '-';
            else c = 'X';
        }
        int dif = n - minimo;
        if(dif != 0){
            int aux = ans.size() - 1;
            for(int i=0; i<dif; i++){
                ans += '-';
            }
            dif--;
            if(dif != 0){
                for(int i=aux; i>=0 and dif > 0; i--){
                    if(ans[i] == 'X'){
                        ans[i] = '-';
                        ans[i+dif] = 'X';
                        dif--;
                    }
                }
            }
        }
    }
    else{
        ans = "*";
    }

    cout << ans << endl;

    return 0;
}