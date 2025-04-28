#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<int> v(n-1);
    vector<int> aux(n, 1);

    for(int i=0; i<n-1; i++){
        cin >> v[i]; aux[v[i]-1] = 0;
    }

    for(int i=0; i<n; i++){
        if(aux[i]){
            cout << i+1 << endl;
            break;
        }
    }


    return 0;
}