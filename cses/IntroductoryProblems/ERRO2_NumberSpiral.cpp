#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        long long x,y,ans; cin >> x >> y;
        long long maior = max(x, y);
        long long tam = (2*maior)-1;
        vector<long long> v(tam);

        long long cont = maior * maior;
        for(long long i=0; i<tam; i++){
            v[i] = cont;
            cont--;
        }

        int flag = 0;
        if(maior % 2 == 0){
            flag = 1;
        }

        if(maior == x){
            if(flag){
                for(long long i=0; i<maior; i++){
                    if(i+1 == y){
                        ans = v[i];
                        break;
                    }
                }
            }
            else{
                for(long long i=v[tam-1]; i>=maior-1; i--){
                    if(i+1 == y){
                        ans = v[i];
                        break;
                    }
                }
            }
        }
        else{
            if(flag){
                for(long long i=v[tam-1]; i>=maior-1; i--){
                    if(i+1 == x){
                        ans = v[i];
                        break;
                    }
                }
            }
            else{
                for(long long i=0; i<maior; i++){
                    if(i+1 == x){
                        ans = v[i];
                        break;
                    }
                }
            }
        }
        cout << ans << endl;

    }

    return 0;
}