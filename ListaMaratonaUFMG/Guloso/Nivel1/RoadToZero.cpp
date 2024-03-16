#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        long long v[2]; cin >> v[0] >> v[1];
        long long a, b; cin >> a >> b;
        long long ans=0;

        sort(v, v+2);
        if(2*a > b){
            ans += (v[0]*b);
            ans += ((v[1] - v[0])*a);
        }
        else{
            ans += ((v[1] + v[0])*a);
        }
        
        cout << ans << endl;
    }

    return 0;
}