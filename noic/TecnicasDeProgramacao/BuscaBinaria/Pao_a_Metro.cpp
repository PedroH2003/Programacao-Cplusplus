// https://olimpiada.ic.unicamp.br/pratique/p1/2007/f2/metro/

#include <bits/stdc++.h>

using namespace std;

vector<int> f (10010);

int eh_possivel(int m, int k){
    int num_fatias=0;
    for(int i=0; i<k; i++){
        num_fatias += (f[i] / m);
    }

    return num_fatias;
}

int main(){

    int n, k; cin >> n >> k;

    for(int i=0; i<k; i++){
        cin >> f[i];    
    }

    int l=1, r = 10010, m;
    while(l <= r){
        m = (l + r) / 2;

        if(eh_possivel(m, k) >= n){
            l = m+1;
        }
        else{
            r = m-1;
        }
    }

    cout << r;


    return 0;
}