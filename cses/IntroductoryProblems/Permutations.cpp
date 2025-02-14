#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<int> v(n); for(int i=0; i<n; i++) v[i] = i+1;
    vector<int> ans;

    for(int i=1; i<n; i+=2){
        ans.push_back(i+1);
    }
    for(int i=0; i<n; i+=2){
        ans.push_back(i+1);
    }

    if(n == 2 or n == 3) cout << "NO SOLUTION" << endl;
    else{
        for(auto u: ans) cout << u << " ";
        cout << endl;        
    }    

    // int flag=1;
    // for(int i=1; i<n; i++){
    //     if(abs(ans[i] - ans[i-1]) == 1){
    //         flag = 0;
    //         break;
    //     }
    // }

    // if(flag){
    //     for(auto u: ans) cout << u << " ";
    //     cout << endl;
    // }
    // else{
    //     cout << "NO SOLUTION" << endl;
    // }

    return 0;
}
