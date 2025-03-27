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

    cin >> k >> s;

    int cont=1;
    string aux = "";
    aux += s[0];
    for(int i=1; i<s.size(); i++){
        if(s[i] == s[i-1]){
            aux += s[i];
            cont++;
        }
        else{
            if(cont >= k){
                troca(aux);
            }
            aux = "";
            aux += s[i];
        }
    }

    return 0;
}