#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int sd[2] = {0,0}, l=0, r=n-1, turno=0;
    while(l <= r){
        if(v[l] < v[r]){
            sd[turno] += v[r];
            r--;
        }
        else{
            sd[turno] += v[l];
            l++;
        }
        turno -= 1;
        turno *= -1;
    }
    cout << sd[0] << " " << sd[1] << endl;

    return 0;
}