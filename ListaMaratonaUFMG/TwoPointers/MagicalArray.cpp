// ERRADO

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n; long ans = n;
    vector<int> v(n);
    map<int, long> repetidos;

    for(int i=0; i<n; i++) cin >> v[i];

    long cont=0; 
    for(int i=0; i<n; i++){

        if(repetidos.find(v[i]) != repetidos.end()){
            cont++;
            long aux = repetidos[v[i]];
            aux += cont;
            repetidos[v[i]] = aux;

            if(i == n-1){
                ans += repetidos[v[i-1]];
            }
        }
        else{
            repetidos.insert({v[i], 0});
            cont=0;
            if(i != 0){
                ans += repetidos[v[i-1]];
                repetidos.erase(v[i-1]);
            }
        }
    }

    cout << ans << endl;

    return 0;
}