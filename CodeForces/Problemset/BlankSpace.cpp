#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> b(n);
        int maximo = -1, cont=0;
        for(int i=0; i<n; i++){
            int num; cin >> num;
            if(num == 0) cont++;
            else cont = 0;

            maximo = max(maximo, cont);
        }
        cout << maximo << endl;
    }

    return 0;
}