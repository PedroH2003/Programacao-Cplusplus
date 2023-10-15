#include <bits/stdc++.h>

using namespace std;

int main(){

    int c, n; cin >> c >> n;
    map<int, int> prog_instalados;
    map<int, int> ans;

    for(int i=0; i<c; i++){
        int a, b; cin >> a >> b; 
        prog_instalados.insert({a, b});
    }

    for(int i=0; i<n; i++){
        int a, b; cin >> a >> b;

        if(prog_instalados.find(a) != prog_instalados.end()){
            if(prog_instalados[a] < b){
                prog_instalados[a] = b;
                ans[a] = b;
            }
        }
        else{
            prog_instalados[a] = b;
            ans[a] = b;
        }
    }

    for(auto it=ans.begin(); it != ans.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}