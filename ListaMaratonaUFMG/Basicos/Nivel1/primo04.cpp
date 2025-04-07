#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;int flag = 1;

    for(int i=2; i*i<=n and flag; i++){
        if(n % i == 0) flag = 0;
    }
    if(flag) cout << "sim" << endl;
    else cout << "nao" << endl;

    return 0;
}