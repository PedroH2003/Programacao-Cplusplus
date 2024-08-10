#include <bits/stdc++.h>

using namespace std;

int main(){

    string a,b; cin >> a >> b;
    int ans=0;

    for(int i=0; i<a.size() and ans == 0; i++){
        if(a[i] <= 'Z') a[i] += 32;
        if(b[i] <= 'Z') b[i] += 32;

        if(a[i] < b[i]) ans = -1;
        else if(a[i] > b[i]) ans = 1;
    }
    cout << ans << endl;

    return 0;
}