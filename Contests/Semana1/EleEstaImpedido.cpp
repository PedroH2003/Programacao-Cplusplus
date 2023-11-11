#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, d; 

    while(cin >> a >> d and a != 0 and d != 0){
        vector<int> atacantes(a), defensores(d);
        char ans = 'N';
        
        for(int i=0; i<a; i++) cin >> atacantes[i];
        for(int i=0; i<d; i++) cin >> defensores[i];

        sort(defensores.begin(), defensores.end());
        int p = defensores[1];

        for(auto u: atacantes){
            if(u < p) ans = 'Y';
        }


        cout << ans << endl;
    }
    
    
    


    return 0;
}