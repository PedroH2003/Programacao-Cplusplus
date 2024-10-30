#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,ans=0; cin >> n;
    for(int i=0; i<n; i++){
        int num; cin >> num;
        if(num != 1) ans++;
    }
    cout << ans << endl;

    return 0;
}