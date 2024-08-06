#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,k; cin >> n;
    vector<int> v(n); 
    vector<int> ans;
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cin >> k;
    for(int i=0; i<k; i++){
        int x,y; cin >> x >> y;

        int pos_x = lower_bound(v.begin(), v.end(), x) - v.begin();

        if(pos_x < 0 or pos_x >= n or v[pos_x] != x){
            pos_x = upper_bound(v.begin(), v.end(), x) - v.begin();
        }



        int pos_y = upper_bound(v.begin(), v.end(), y) - v.begin();
        pos_y--;
        int aux = (pos_y - pos_x) + 1;
        if(pos_x > pos_y) aux = 0;
        ans.push_back(aux);
    }
    for(auto u: ans) cout << u << " ";

    return 0;
}