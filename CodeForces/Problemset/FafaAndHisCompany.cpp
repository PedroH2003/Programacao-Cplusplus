#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans=0, aux; cin >> n; aux = n / 2;
    for(int i=1; i<=aux; i++) if((n-i) % i == 0){
        ans++;
    }
    cout << ans << endl;
    return 0;
}