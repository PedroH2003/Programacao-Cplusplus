#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        long long a,b; cin >> a >> b;
        long long ans = a + b;

        int flag = 0;
        if(min(a, b) * 2 >= max(a, b)) flag = 1;

        if(ans % 3 == 0 and flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}