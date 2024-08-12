#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, jogador[2] = {0, 0}; cin >> n;
    vector<int> v(n); for(int i=0; i<n; i++) cin >> v[i];

    int l=0,r=n-1,i=0;
    while(l < r){
        if(v[l] > v[r]){
            jogador[i] += v[l];
            l++;
        }
        else{
            jogador[i] += v[r];
            r--;
        }
        i++;
        if(i == 2) i = 0;
    }
    jogador[i] += v[l];
    cout << jogador[0] << " " << jogador[1] << endl;

    return 0;
}