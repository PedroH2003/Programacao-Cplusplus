#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    while(cin >> n and n != 0){
        vector<int> ini(n);
        int erro = 0;
        for(int i=0; i < n; i++){
            int c, p; cin >> c >> p;

            p += i;

            if(p >= 0 and p < n and ini[p] == 0){
                ini[p] = c;
            }
            else{
                erro = 1;
            }

        }

        if(erro) cout << -1 << endl;
        else{
            for(auto u: ini) cout << u << " ";
            cout << endl;
        }
    }


    return 0;
}