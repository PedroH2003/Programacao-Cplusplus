// https://codeforces.com/contest/1339/problem/B

#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int num; cin >> num;
        vector<int> a (num);
        vector<int> ans(num);

        for(int i=0; i<num; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        int l=0, r=num-1;

        for(int i=num-1; i>=0; i -= 2){
            if(l != r){
                ans[i] = a[l];
                ans[i-1] = a[r];
                l++; r--; 
            }
            else{
                ans[i] = a[l];
            }
        }

        for(int i=0; i<num; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";

    }

    return 0;
}

