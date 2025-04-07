#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        string a,b; cin >> a >> b; b += b; 
        string a2 = a; reverse(a2.begin(), a2.end());

        int j=0,z=0,flag=1;
        for(int i=0; i<b.size() and flag; i++){

            if(a[j] == b[i]){
                j++;
                if(j == a.size()) flag = 0;
            }
            else{
                j = 0;
            }

            if(a2[z] == b[i]){
                z++;
                if(z == a2.size()) flag = 0;
            }
            else{
                z = 0;
            }
        }

        if(flag) cout << "N" << endl;
        else cout << "S" << endl;
    }

    return 0;
}