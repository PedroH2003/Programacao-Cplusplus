#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){

        int n; cin >> n;
        int a=0,b=0, aux=n/2, ans;
        vector<int> moedas(n);

        for(int i=0; i<n; i++) moedas[i] = pow(2, i+1);
        sort(moedas.begin(), moedas.end());

        a += moedas[n-1];
        int i=0;
        for(i=0; i<aux-1; i++){
            a += moedas[i];
        }
        for(int j=i; j<n-1; j++){
            b += moedas[j];
        }

        ans = a - b;
        if(ans < 0) ans *= -1;

        cout << ans << endl;

    }
    


    
    return 0;
}
