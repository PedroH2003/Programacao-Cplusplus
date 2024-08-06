#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        long long x,y,a,b=0; cin >> x >> y >> a >> b;

        long menor = min(x,y);
        long maior = max(x,y);
        
        long long ans = (menor * b);
        maior -= menor;
        ans += (maior * a);

        long long aux = (a*x) + (a*y);
        ans = min(ans, aux);
        cout << ans << endl;
    }

    return 0;
}