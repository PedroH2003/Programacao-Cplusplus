#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,aux,ans="Yes"; cin >> s; aux="nas";

    int j=s.size()-1;
    for(int i=0; i<3; i++){
        if(aux[i] != s[j]){
            ans="No";
            break;
        }
        j--;
    }
    cout << ans << endl;

    return 0;
}