#include <bits/stdc++.h>

using namespace std;

int main(){

    string s; cin >> s;

    int ans=1, cont=1;
    for(int i=1; i<s.size(); i++){
        if(s[i] == s[i-1]){
            cont++;
        }
        else{
            cont = 1;
        }
        ans = max(ans, cont);
    }
    cout << ans << endl;

    return 0;
}