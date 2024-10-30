#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, aux_n, ans=0; cin >> n; aux_n = n+1;
    int count=0;
    while(aux_n--){
        string s; cin >> s;
        int a; float b;
        string aux="";

        aux += s[s.size()-2];
        aux += s[s.size()-1];
        a = stoi(aux);
        count += a;

        if(aux_n == n) continue;
        if(count % 100 != 0) ans++;
    }
    cout << ans << endl;


    return 0;
}