#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    while(n--){
        string s, aux; cin >> s; aux=s;
        char ans='O';
        for(int i=0; i<s.size() and ans!='N' ; i++){
            if(s[i] <= 'Z') s[i] += 32;
            if(i != 0 and s[i] <= s[i-1]) ans='N';
        }

        cout << aux << ": " << ans << endl;
    }



    return 0;
}