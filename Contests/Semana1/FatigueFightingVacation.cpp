#include <bits/stdc++.h>

using namespace std;

int main(){

    int d, c, r, ans=0; cin >> d >> c >> r;
    vector<int> cans(c), revi(r);

    for(int i=0; i<c; i++) cin >> cans[i];
    for(int i=0; i<r; i++) cin >> revi[i];

    int a=0, b=0;
    while(a < cans.size() or b < revi.size()){

        if(b == revi.size() and d < cans[a]){
            break;
        }

        if(a < cans.size() and d >= cans[a]){
            d -= cans[a];
            a++;
            ans++;
        }
        else if(b < revi.size()){
            d += revi[b];
            b++;
            ans++;
        }

    }

    cout << ans;

    return 0;
}