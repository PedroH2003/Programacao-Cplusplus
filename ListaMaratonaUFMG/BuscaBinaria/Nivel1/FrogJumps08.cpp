#include <bits/stdc++.h>

using namespace std;

string s;
bool eh_possivel(int m){
    int cont=1;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'L') cont++;
        else cont = 1;

        if(cont > m) return false;
    }
    return true;
}

int main(){

    int t; cin >> t;

    while(t--){
        cin >> s;

        int l=1,r=2e5+10;
        while(l < r){
            int m = (l + r) / 2;

            if(eh_possivel(m)) r = m;
            else l = m+1;
        }
        cout << r << endl;
    }

    return 0;
}