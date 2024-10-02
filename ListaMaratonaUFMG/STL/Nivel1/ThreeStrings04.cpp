#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        string a,b,c,ans="YES"; cin >> a >> b >> c;

        for(int i=0; i<c.size(); i++){
            if(c[i] != a[i] and c[i] != b[i]){
                ans="NO";
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}