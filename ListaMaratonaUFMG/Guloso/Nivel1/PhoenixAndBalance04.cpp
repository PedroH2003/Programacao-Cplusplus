#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long a=0,b=0;

        for(int i=1; i<=n; i++){
            if(i < n/2 or i == n){
                a += pow(2, i);
            }
            else{
                b += pow(2, i);
            }
        }
        long long ans = abs(a - b);
        cout << ans << endl;
    }

    return 0;
}