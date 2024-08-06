#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        string ans="";
        for(int i=0; i<8; i++){
            string s; cin >> s;
            for(int j=0; j < 8; j++){
                if(s[j] != '.'){
                    ans += s[j];
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}