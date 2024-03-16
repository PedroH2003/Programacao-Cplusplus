#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        string ans="YES";

        if(n == 5){
            set<char> nome;

            for(int i=0; i<5; i++){
                nome.insert(s[i]);
            }
            s = "Timur";

            for(int i=0; i<5 and ans=="YES"; i++){
                if(nome.find(s[i]) == nome.end()) ans = "NO";
            }
            
        } else ans = "NO";

        cout << ans << endl;
    }

    return 0;
}