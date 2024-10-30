#include <bits/stdc++.h>

using namespace std;

int main(){

    int t,d,m; cin >> t >> d >> m;
    vector<int> ref(m); for(int i=0; i<m; i++) cin >> ref[i];
    
    char ans='N';
    for(int i=0; i<m and ans=='N'; i++){
        int aux;
        if(i == 0){
            aux = ref[i];
        }
        
        if(i == m-1){
            aux = max(d - ref[i], ref[i] - ref[i-1]);
        }
        
        if(i != 0 and i != m-1){
            aux = ref[i] - ref[i-1];
        }
        
        if(aux >= t) ans='Y';
    }
    if(m == 0 and d >= t) ans = 'Y';

    cout << ans << endl;


    return 0;
}