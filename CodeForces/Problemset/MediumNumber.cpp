#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int v[3]; cin >> v[0] >> v[1] >> v[2];

        sort(v, v+3);
        cout << v[1] << endl;

    }


    return 0;
}