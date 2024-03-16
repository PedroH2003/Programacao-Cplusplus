#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        int ans=n;
        string s; cin >> s;
        set<char> aux;

        for(int i=0; i<n; i++){
            if(aux.find(s[i]) == aux.end()){
                ans++;
            }
            aux.insert(s[i]);
        }

        cout << ans << endl;
    }

    return 0;
}