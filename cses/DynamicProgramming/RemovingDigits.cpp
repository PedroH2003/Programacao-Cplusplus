#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    
    int ans = 0;
    while(n){
        int aux = n;
        vector<int> v;

        while(aux){
            int num = aux % 10;
            aux /= 10;
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        n -= v[v.size()-1];
        ans++;
    }
    cout << ans << endl;

    return 0;
}