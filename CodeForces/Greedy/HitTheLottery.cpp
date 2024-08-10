#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,ans=0,pos=0; cin >> n;
    vector<int> notas = {100, 20, 10, 5, 1};

    while(n > 0){
        int cont = n / notas[pos];
        ans += cont;
        n -= (cont*notas[pos]);
        pos++;
    }
    cout << ans << endl;

    return 0;
}