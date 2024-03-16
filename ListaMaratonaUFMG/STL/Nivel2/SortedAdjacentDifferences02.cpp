#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> a(n); for(int i=0; i<n; i++) cin >> a[i];
        vector<int> ans(n);

        sort(a.begin(), a.end());

        int l=0, r=n-1, cont=1;
        for(int i=0; i<n; i++){
            if(cont){
                ans[i] = a[l];
                l++;
                cont = 0;
            }
            else{
                ans[i] = a[r];
                r--;
                cont = 1;
            }
        }
        reverse(ans.begin(), ans.end());
        for(auto u: ans) cout << u << " ";
        cout << endl;
    }

    return 0;
}