#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,h,w; cin >> n >> h >> w;
    vector<pair<char,char>> ans(n);

    for(int i=0; i<n; i++){
        char a,b; cin >> a >> b;

        ans[i] = {'N', 'N'};
        if(a == 'Y' or w == 0){
            h--;
            w++;
            ans[i].first = 'Y';
        }

        if(b == 'Y' or h == 0){
            w--;
            h++;
            ans[i].second = 'Y';
        }
    }
    for(auto u: ans) cout << u.first << " " << u.second << endl;

    return 0;
}