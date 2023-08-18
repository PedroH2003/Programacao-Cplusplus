// https://codeforces.com/problemset/problem/499/B

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m; cin >> n >> m;
    map<string, string> linguas;
    string ans="";

    while(m--){
        string l1, l2; 
        cin >> l1 >> l2;

        linguas[l1] = l2;
    }

    while(n--){
        string p; cin >> p;

        if(p.size() <= linguas[p].size()){
            ans += p;
        }
        else
        {
            ans += linguas[p];
        }

        if(n != 0){
            ans += " ";
        }
       
    }

    cout << ans;

    return 0;
}