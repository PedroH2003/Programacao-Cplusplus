#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,cont=1;
    while(cin >> n and n != 0){
        int ans;
        for(int i=1; i<=n; i++){
            int num; cin >> num; 
            if(num == i) ans=num;
        }
        cout << "Teste " << cont << endl;
        cout << ans << endl;
        cout << endl;
        cont++;
    }

    return 0;
}