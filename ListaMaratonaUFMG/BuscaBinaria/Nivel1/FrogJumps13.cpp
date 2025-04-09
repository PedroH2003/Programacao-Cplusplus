#include <bits/stdc++.h>

using namespace std;

string s; 
bool val(int d){
    int cont = 1;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'L') cont++;
        else cont = 1;

        if(cont > d) return false;
    }
    return true;
}

int main(){

    int t; cin >> t;
    while(t--){
        cin >> s;
        
        int l=1,r=2e5+10,ans;
        while(l <= r){
            int m = (l + r) / 2;
            if(val(m)){
                ans = m;
                r = m-1;
            }else{
                l = m+1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}