#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, pos=2; cin >> n;

    while(n--){
        int a, b; cin >> a >> b;

        if(a == pos){
            pos = b;
        }
        else if(b == pos){
            pos = a;
        }
    }

    cout << pos;
    
    return 0;
}