#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        string num; cin >> num;
        int n1=0, n2=0;

        for(int i=0; i<6; i++){
            if(i < 3){
                n1 += num[i] - '0';
            }
            else{
                n2 += num[i] - '0';
            }
        }
        
        if(n1 == n2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}