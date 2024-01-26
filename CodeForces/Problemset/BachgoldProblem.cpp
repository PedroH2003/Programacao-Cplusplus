#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n; cin >> n;
    vector<int> ans(n/2, 2);

    if(n % 2 != 0){
        ans[ans.size()-1] = 3;
    }

    cout << ans.size() << endl;
    for(auto u: ans) cout << u << " ";



    return 0;
}