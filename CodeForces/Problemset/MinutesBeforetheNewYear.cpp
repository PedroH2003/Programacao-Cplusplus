#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    
    while(t--){
        int h, m; cin >> h >> m;
        int ans=0;

        if(h != 0 or m != 0){
            if(m != 0){
                m = 60 - m;
                h++;
            }
            h = 24 - h;
            h *= 60;

            ans = m + h; 
        }
        cout << ans << endl;
    }

    return 0;
}