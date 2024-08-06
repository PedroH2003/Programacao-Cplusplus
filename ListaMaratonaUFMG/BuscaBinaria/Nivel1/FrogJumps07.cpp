#include <bits/stdc++.h>

using namespace std;

#define REPI(i, a, b) for(int i=a; i<b; i++)

string s;
bool eh_possivel(int d){
    int cont=1;
    REPI(i, 0, s.size()){
        if(s[i] == 'L') cont++;
        else cont = 1;

        if(cont > d) return false;
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