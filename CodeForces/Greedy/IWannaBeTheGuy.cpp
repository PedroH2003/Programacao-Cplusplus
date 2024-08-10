#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    set<int> ans;

    int p; cin >> p;
    for(int i=0; i<p; i++){
        int num; cin >> num; 
        ans.insert(num);
    }
    int q; cin >> q;
    for(int i=0; i<q; i++){
        int num; cin >> num;
        ans.insert(num);
    }
    if(ans.size() == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;

    return 0;
}