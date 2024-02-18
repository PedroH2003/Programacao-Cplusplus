#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int v[4]; for(int i=0; i<4; i++) cin >> v[i];
        string ans="YES";

        int maior1 = max(v[0], v[1]);
        int maior2 = max(v[2], v[3]);

        if((v[0] > maior2 and v[0] != maior1) or (v[1] > maior2 and v[1] != maior1)){
            ans = "NO";
        }
        else if((v[2] > maior1 and v[2] != maior2) or (v[3] > maior1 and v[3] != maior2)){
            ans = "NO";
        }

        cout << ans << endl;
    }

    return 0;
}

