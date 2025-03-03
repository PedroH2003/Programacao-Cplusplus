#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

const int MAX = 2e5+10;
int n;
vector<int> a(MAX);
vector<vector<int>> memo(MAX);


vector<int> dp(int s){
    if(memo[s].size() != 0) return memo[s];

    memo[s].push_back(s);
    for(int i=s+1; i<n; i++){
        if(a[i] - a[s] == 1){
            vector<int> aux = dp(i);
            memo[s].insert(memo[s].end(), aux.begin(), aux.end());
            break;
        }
    }

    // cout << s << " -> ";
    // for(int i=0; i<memo[s].size(); i++){
    //     cout << memo[s][i] << " ";
    // }
    // cout << endl;
    return memo[s];
}

int main(){ _

    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    vector<int> ans;

    set<int> confere;
    for(int i=0; i<n; i++){
        if(confere.find(a[i]) != confere.end()) continue;
        confere.insert(a[i]);
        vector<int> aux = dp(i);
        if(aux.size() > ans.size()){
            ans = aux;
        }
    }

    cout << ans.size() << endl;
    for(auto u: ans) cout << u+1 << " ";

    return 0;
}