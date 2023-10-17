#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, ans=0, cont=0; cin >> a >> b;
    set<int> alice, beatriz;

    for(int i=0; i<a; i++){
        int aux; cin >> aux;
        alice.insert(aux);
    }

    for(int i=0; i<b; i++){
        int aux; cin >> aux;

        if(beatriz.find(aux) == beatriz.end() and alice.find(aux) == alice.end()){
            cont++;
        }
        
        beatriz.insert(aux);
    }

    for(auto it=alice.begin(); it != alice.end() and ans < cont; it++){
        if(beatriz.find(*it) == beatriz.end()){
            ans++;
        }
    }


    cout << ans;

    return 0;
}