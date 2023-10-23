#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, aux; cin >> n; aux = n;
    string c; cin >> c;
    vector<int> b;

    for(int i=0; i<n; i++){
        if(c[i] == 'n'){
            b.push_back(1);
            aux -= 3;
        }
    }
    aux /= 4;
    b.resize(b.size()+aux);

    for(auto u: b) cout << u << " ";


    return 0;
}