#include <bits/stdc++.h>

using namespace std;

int main(){

    int r, c, k; cin >> r >> c >> k;
    char ans='Y';
    for(int i=0; i<r; i++){
        string a,b; cin >> a >> b;
        int aux=0;

        for(int j=0; j<c and ans=='Y'; j++){
            if(a[j] == '-'){
                aux=1;
            }
        }
        for(int j=0; j<k and ans=='Y'; j++){
            if(b[j] == '*' and aux == 1){
                ans='N';
            }
        }
    }
    cout << ans << endl;

    return 0;
}