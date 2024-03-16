#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        string s, aux="codeforces"; cin >> s;
        int ans=0;

        for(int i=0; i<10; i++) if(s[i] != aux[i]) ans++;
        cout << ans << endl;
    }
    
    return 0;
}