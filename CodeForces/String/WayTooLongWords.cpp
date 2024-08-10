#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    while(n--){
        string s, ans=""; cin >> s;

        if(s.size() <= 10) ans = s;
        else{
            ans += s[0];
            int aux = s.size() - 2;
            ans += to_string(aux);
            ans += s[s.size() - 1];
        }
        cout << ans << endl;
    }


    return 0;
}