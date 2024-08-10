#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n); for(int i=0; i<n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        string ans="NO";
        for(int i=0; i<n; i++){
            if(i == n-1){
                ans = "YES";
            }
            else{
                if(v[i+1] - v[i] > 1) break;
            }
        }
        cout << ans << endl;
    }


    return 0;
}