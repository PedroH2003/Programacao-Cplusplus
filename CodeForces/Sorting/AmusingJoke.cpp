#include <bits/stdc++.h>

using namespace std;

int main(){

    string a,b,c,ans="YES"; cin >> a >> b >> c;

    if(c.size() != (a.size() + b.size())) ans = "NO";
    else{
        int i=0,j=0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());

        for(int k=0; k<c.size(); k++){
            if(i != a.size() and c[k] == a[i]) i++;
            else if(j != b.size() and c[k] == b[j]) j++;
        }

        if(i != a.size() or j != b.size()) ans = "NO";
    }

    cout << ans << endl;

    return 0;
}