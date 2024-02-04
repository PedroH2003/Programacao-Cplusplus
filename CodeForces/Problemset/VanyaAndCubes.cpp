#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, cont=0, cont2=0, ans=0; cin >> n;
    

    while(true){
        ans++;
        cont2 += ans;
        cont += cont2;

        if(cont > n){
            ans--;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}