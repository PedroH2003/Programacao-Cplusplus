#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string s, ans="YES"; cin >> s;
        char aux = ' ';
        set<char> c;

        for(int i=0; i<n; i++){
            if(aux != ' '){
                if(s[i] != aux){
                    if(c.find(aux) == c.end()){
                        c.insert(aux);
                    }
                    else{
                        ans = "NO";
                        break;
                    }
                }
            }

            aux = s[i];

            if(i == n-1){
                if(c.find(aux) == c.end()){
                    c.insert(aux);
                }
                else{
                    ans = "NO";
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}