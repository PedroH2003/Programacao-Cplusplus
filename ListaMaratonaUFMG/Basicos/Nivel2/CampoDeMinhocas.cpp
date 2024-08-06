#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m,campo[110][110], ans=0; cin >> n >> m;

    for(int i=0; i<n; i++){
        int aux=0; 
        for(int j=0; j<m; j++){
            cin >> campo[i][j];
            aux += campo[i][j];
        }
        if(aux > ans) ans = aux;
    }

    for(int j=0; j<m; j++){
        int aux=0;
        for(int i=0; i<n; i++){
            aux += campo[i][j];
        }
        if(aux > ans) ans = aux;
    }

    cout << ans << endl;


    return 0;
}