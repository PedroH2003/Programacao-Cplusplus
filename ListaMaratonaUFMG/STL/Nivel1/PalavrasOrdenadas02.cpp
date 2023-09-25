#include <bits/stdc++.h>

using namespace std;

int main(){

    int p; cin >> p;

    while(p--){
        string palavra, aux; cin >> palavra; aux = palavra;
        char ans = 'O';

        for(int i=0; i<palavra.size(); i++){
            if(palavra[i] >= 'A' and palavra[i] <= 'Z'){
                palavra[i] += 32;
            }

            if(i != 0){
                if(palavra[i] <= palavra[i-1]){
                    ans = 'N';
                    break;
                }
            }

        }

        cout << aux << ": " << ans << endl;
        ans = 'O';
    }

    return 0;
}