#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, teste=1, ganhador; 
    while(cin >> n and n != 0){
        for(int i=1; i<=n; i++){
            int num; cin >> num;
            if(num == i) ganhador=num;
        }

        cout << "Teste " << teste << endl;
        cout << ganhador << endl;
        cout << endl;
        teste++;
    }

    return 0;
}