#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int x, n, m; cin >> x >> n >> m;
        m = (m * 10);

        while(x - m > 0 and n > 0){
            x = (x / 2) + 10;
            n--;
        }  
        x -= m;

        if(x <= 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }


    return 0;
}