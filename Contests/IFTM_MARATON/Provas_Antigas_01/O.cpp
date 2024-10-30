#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,copo=2; cin >> n;
    while(n--){
        int a,b; cin >> a >> b;

        if(a == copo) copo = b;
        else if(b == copo) copo = a;
    }
    cout << copo << endl;

    return 0;
}