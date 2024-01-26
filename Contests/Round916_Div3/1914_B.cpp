#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n,k; cin >> n >> k;
        vector<int> v(n, 0);

        for(int i=0; i<k; i++){
            v[i] = i+1;
        } 
        
        int aux2=n;
        for(int i=k; i<n; i++){
            v[i] = aux2;
            aux2--;
        }

        for(auto u: v) cout << u << " ";
        cout << endl;


    }


    return 0;
}