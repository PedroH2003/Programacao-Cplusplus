#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m; cin >> n >> m;
    string ans = "#Black&White";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char c; cin >> c;

            if(c == 'C' or c == 'M' or c == 'Y') ans = "#Color";
        }
    }

    cout << ans << endl;
    
    return 0;
}