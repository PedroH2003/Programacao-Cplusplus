#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string s, ans="NO"; cin >> s;
        pair<int,int> pos = {0,0};

        for(int i=0; i<n; i++){
            if(s[i] == 'L') pos.first--;
            else if(s[i] == 'R') pos.first++;
            else if(s[i] == 'U') pos.second++;
            else pos.second--;

            if(pos.first == 1 and pos.second == 1) ans = "YES";
        }
        cout << ans << endl;
    }

    return 0;
}