#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    while(n--){
        string s; cin >> s;
        int flag = 1;

        for(int i=1; i<s.size() and flag; i++){
            if(tolower(s[i]) <= tolower(s[i-1])) flag = 0;
        }

        if(flag) cout << s << ": O" << endl;
        else cout << s << ": N" << endl;
    }

    return 0;
}