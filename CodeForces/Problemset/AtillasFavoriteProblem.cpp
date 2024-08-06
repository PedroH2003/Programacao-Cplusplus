#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        char maior = 'a';
        for(int i=0; i<n; i++){
            if(s[i] > maior) maior = s[i];
        }
        int ans = (maior - 'a') + 1;
        cout << ans << endl;
    }

    return 0;
}