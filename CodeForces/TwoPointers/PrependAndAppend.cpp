#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        int n,ans; cin >> n; ans = n;
        string s; cin >> s;

        int l=0,r=n-1;
        while(l < r){
            if(s[l] != s[r]){ 
                ans -= 2;
                l++; r--;
            }
            else{
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}