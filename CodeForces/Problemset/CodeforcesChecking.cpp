#include <bits/stdc++.h>

using namespace std;

int main(){

    set<char> s;
    string aux = "codeforces";
    for(int i=0; i<aux.size(); i++){
        s.insert(aux[i]);
    }

    int n; cin >> n;
    for(int i=0; i<n; i++){
        char c; cin >> c;

        if(s.find(c) != s.end()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}