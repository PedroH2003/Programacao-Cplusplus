#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k; cin >> n >> k;
    vector<int> v(n);
    
    for(int i=0; i<n; i++) cin >> v[i];

    for(int i=0; i<k; i++){
        int num; cin >> num;
        int aux = lower_bound(v.begin(), v.end(), num) - v.begin();
        if(aux < n and v[aux] == num){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }


    return 0;
}