#include <bits/stdc++.h>

using namespace std;

string s;
bool is_possible(int d){
    int cont = 1;
    for(int i=0; i<s.size(); i++){
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
            int w = (l + r) / 2;

            if(is_possible(w)) r = w;
            else l = w+1;
        }
        cout << r << endl;
    }

    return 0;
}