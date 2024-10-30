#include <bits/stdc++.h>

using namespace std;

int main(){

    string s,t; cin >> s >> t;

    int n = max(s.size(), t.size());
    int ans=0;
    for(int i=0; i<n and ans==0; i++){
        if(i > s.size()-1 or i > t.size()-1 or s[i] != t[i]){
            ans = i+1;
        } 
    }
    cout << ans << endl;

    return 0;
}