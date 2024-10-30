#include <bits/stdc++.h>

using namespace std;

int main(){

    char ans='S';
    for(int i=0; i<8; i++){
        int num; cin >> num;
        if(num == 9) ans='F';
    }
    cout << ans << endl;

    return 0;
}