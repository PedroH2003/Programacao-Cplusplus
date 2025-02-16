#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        long long x,y,ans; cin >> x >> y;
        long long maior = max(x, y);

        long long cont = maior * maior;
        long long cont2 = cont - ((2*maior) - 2);

        int flag = 0;
        if(maior % 2 == 0){
            flag = 1;
        }

        if(maior == x){
            if(flag){
                ans = cont - (min(x,y) - 1);
            }
            else{
                ans = cont2 + (min(x,y) - 1);
            }
        }
        else{
            if(flag){
                ans = cont2 + (min(x,y) - 1);
            }
            else{
                ans = cont - (min(x,y) - 1);
            }
        }
        cout << ans << endl;
    }

    return 0;
}