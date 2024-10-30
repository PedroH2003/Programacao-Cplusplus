#include <bits/stdc++.h>

using namespace std;

int main(){

    int c,ans=100,aux=100; cin >> c;
    for(int i=0; i<c; i++){
        int num; cin >> num;
        aux += num;

        ans = max(aux, ans);
    }
    cout << ans << endl;

    return 0;
}