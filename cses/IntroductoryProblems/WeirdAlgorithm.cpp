#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main(){

    long long n; cin >> n;
    vector<long long> v;

    while(n != 1){
        v.push_back(n);
        if(n % 2 == 0){
            n /= 2;
        }else{
            n = (n * 3) + 1;
        }
    }
    v.push_back(1);
    for(auto u: v) cout << u << " ";
    cout << endl;

    return 0;
}