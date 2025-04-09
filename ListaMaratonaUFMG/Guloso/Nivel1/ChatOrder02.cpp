#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<string> aux,ans;
    set<string> comp;

    while(n--){
        string s; cin >> s;
        aux.push_back(s);
    }
    for(int i=aux.size()-1; i>=0; i--){
        if(comp.find(aux[i]) == comp.end()) ans.push_back(aux[i]);
        comp.insert(aux[i]);
    }
    for(auto u: ans) cout << u << endl;

    return 0;
}