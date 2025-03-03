#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

const int INF = 0x3f3f3f3f;
const int MAX = 1e5+10;
int n;
vector<long long> a(MAX),b(MAX),c(MAX);
long long memo[MAX][4];

int dp(int dia, int escolha){
    if(dia == n) return 0;
    if(memo[dia][escolha] != -1) return memo[dia][escolha];

    long long cont = 0;
    if(escolha == 0 or escolha != 1){
        cont = dp(dia+1, 1) + a[dia];
    }

    if(escolha == 0 or escolha != 2){
        cont = max(cont, dp(dia+1, 2) + b[dia]);
    }

    if(escolha == 0 or escolha != 3){
        cont = max(cont, dp(dia+1, 3) + c[dia]);
    }

    return memo[dia][escolha] = cont;
}


int main(){

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    memset(memo, -1, sizeof memo);
    long long ans = dp(0, 0);
    cout << ans << endl;


    return 0;
}