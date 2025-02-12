#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n; cin >> n;
    vector<long long> ans;

    while(n != 1){
        ans.push_back(n);
        if(n % 2 == 0) n /= 2;
        else n = (n*3) + 1;
    }
    ans.push_back(1);

    for(auto u: ans) cout << u << " ";
    cout << endl;

    return 0;
}