#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, ptm=0, ptc=0; cin >> n;

    while(n--){
        int m, c; cin >> m >> c;

        if(m > c){
            ptm++;
        }
        else if(m < c){
            ptc++;
        }

    
    }

    if(ptm > ptc){
        cout << "Mishka";
    }
    else if(ptm < ptc){
        cout << "Chris";
    }
    else{
        cout << "Friendship is magic!^^";
    }

    return 0;
}