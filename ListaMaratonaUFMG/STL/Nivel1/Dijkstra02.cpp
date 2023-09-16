#include <bits/stdc++.h>

using namespace std;

int main(){

    string joia;
    set<string> bracelete;

    while(cin >> joia){
        bracelete.insert(joia);
    }

    cout << bracelete.size() << endl;

    return 0;
}