#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m; cin >> n >> m;
    vector<vector<int>> campo(n, vector<int>(m));
    
    int cont=0, ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> campo[i][j];
            cont+=campo[i][j];
        }
        ans = max(cont, ans);
        cont = 0;
    }

    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            cont += campo[i][j];
        }
        ans = max(cont, ans);
        cont = 0;
    }

    cout << ans << endl;

    return 0;
}