#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<int> v(n-1);

    for(int i=0; i<n-1; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int cont = 1;
    for(int i=0; i<n-1; i++){
        if(v[i] != cont) break;
        cont++;
    }
    cout << cont << endl;


    return 0;
}