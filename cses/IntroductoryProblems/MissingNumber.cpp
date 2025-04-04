#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    unordered_set<int> ans;

    for(int i=0; i<n-1; i++){
        int num; cin >> num;
        ans.insert(num);
    }
    for(int i=1; i<=n; i++){
        if(ans.find(i) == ans.end()){
            cout << i << endl;
            break;
        }
    }

    return 0;
}