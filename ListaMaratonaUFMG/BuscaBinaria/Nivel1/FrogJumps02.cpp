// https://codeforces.com/contest/1324/problem/C

#include <bits/stdc++.h>

using namespace std;

string s;
bool eh_possivel(int d){
    int cont=1;
    bool aux = true;
    for(int i=0; i<s.size() and aux; i++){
        if(s[i] == 'L'){
            cont++;
        }
        else{
            cont = 1;
        }
        if(cont > d){
            aux = false;
        }
    }

    return aux;
}

int main(){

    int t; cin >> t;
    while(t--){
        cin >> s;

        int l=1, r=2e5+10, m;
        while(l < r){
            m = (l + r) / 2;

            if(eh_possivel(m)) r = m;
            else l = m + 1;
        }

        cout << r << endl;
    }


    return 0;
}