#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, b;

    while(cin >> n >> b and n != 0 and b != 0){
        set<int> globo;
        char ans = 'Y';

        for(int i=0; i<b; i++){
            int aux; cin >> aux;
            globo.insert(aux);
        }

        for(int i=1; i<n+1; i++){
            int aux = 0;

            for(auto it = globo.begin(); it != globo.end(); it++){
                int sum = i + *it;

                if(globo.find(sum) != globo.end()){
                    aux = 1;
                }
            }

            if(aux == 0){
                ans = 'N';
                break;
            }
        }
        
        cout << ans << endl;
    }

    return 0;
}