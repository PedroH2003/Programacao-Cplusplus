#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);

        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int l=0,r=n-1;
        vector<int> ans;
        while(l < r){
            ans.push_back(v[r]);
            ans.push_back(v[l]);
            l++;
            r--;
        }
        if(n % 2 != 0) ans.push_back(v[r]);
        reverse(ans.begin(), ans.end());
        for(auto u: ans) cout << u << " ";
        cout << endl;

    }

    return 0;
}