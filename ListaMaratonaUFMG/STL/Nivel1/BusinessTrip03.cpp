#include <bits/stdc++.h>

using namespace std;

int main(){

    int k, ans=0; cin >> k;
    int months[12]; 

    for(int i=0; i<12; i++) cin >> months[i];

    sort(months, months+12);

    for(int i=11; i>=0; i--){
    
        if(k <= 0){
            break;
        }

        k -= months[i]; ans++;
    }

    if(k > 0){
        ans = -1;
    }
    cout << ans;


    return 0;
}