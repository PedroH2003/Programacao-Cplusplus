#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string log; cin >> log;
        vector<int> prob(26, 0);

        int ans=0;
        for(int i=0; i<log.size(); i++){
            int aux = int(log[i]) - 65;

            prob[aux]++;
            if(aux+1 == prob[aux]){
                ans++;
            }
        }        
        
        cout << ans << endl;
    }

    return 0;
}
