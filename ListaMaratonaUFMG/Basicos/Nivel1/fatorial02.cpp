#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, ans=1; cin >> n;

    for(int i=n; i>=1; i--){
        ans *= i;
    }
    cout << ans << endl;

    return 0;
}