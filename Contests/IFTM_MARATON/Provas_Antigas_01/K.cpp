#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n; cin >> n;
    vector<string> v(n);
    set<char> ini;
    char ans='N';

    for(int i=0; i<n; i++){
        cin >> v[i];
        ini.insert(v[i][0]);
    }
    for(int i=0; i<n and ans=='N'; i++){
        ans='Y';
        for(int j=0; j<v[i].size(); j++){
            if(ini.find(v[i][j]) == ini.end()){
                ans='N';
            }
        }
    }
    cout << ans << endl;

    return 0;
}