#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string ans="", aux="";
        for(int i=0; i<3; i++){
            if(n > 26){
                if(n - 26 > 1 or i != 0){
                    aux += 'z';
                    n -= 26;
                }
                else{
                    aux += 'y';
                    n -= 25;
                }

            }
            else if(n <= 26 and i != 2){
                ans += 'a';
                n -= 1;
            }
            else{
                n--;
                char aux2 = 'a' + n;
                ans += aux2;
            }
        }
        if(aux != ""){
            ans += aux;
        }

        cout << ans << endl;
    }

    return 0;
}