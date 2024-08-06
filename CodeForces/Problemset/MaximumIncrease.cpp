#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<int> v(n);

    int ant=0,ans=0,cont=0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i] > ant){
            ant = v[i];
            cont++;
        }
        else{
            ant = v[i];
            ans = max(ans, cont);
            cont = 1;
        }

        if(i == n-1) ans = max(ans, cont);
    }
    cout << ans << endl;


    return 0;
}