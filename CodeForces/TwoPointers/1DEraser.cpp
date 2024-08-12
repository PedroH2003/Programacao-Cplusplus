#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        int n,k,j=0,ans=0,aux=0; cin >> n >> k;
        string s; cin >> s;
        for(int i=0; i<n; i++){
            if(s[i] == 'B' and aux == 0){
                aux = 1;
                ans++;
            }

            if(aux == 1){
                j++;
            }
            if(j == k){
                aux = 0;
                j = 0;
            }   
        }
        cout << ans << endl;
    }

    return 0;
}