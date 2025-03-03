#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main(){

    int n; cin >> n;
    string s; cin >> s;
    vector<int> ans;

    for(int i=0; i<n; i++){
        if(s[i] == 'n') ans.push_back(1);
    }
    n -= (ans.size() * 3);
    n /= 4;
    for(int i=0; i<n; i++){
        ans.push_back(0);
    }

    for(auto u: ans) cout << u << " ";

    return 0;
}