#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n; cin >> n;
    long long sum = (n * (n + 1)) / 2;

    if(sum % 2 != 0) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        sum /= 2;
        vector<int> set1,set2;
        for(int i=n; i>=1; i--){
            if(sum - i >= 0){
                set1.push_back(i);
                sum -= i;
            }else set2.push_back(i);
        }
        cout << set1.size() << endl;
        for(auto u: set1) cout << u << " ";
        cout << endl;
        cout << set2.size() << endl;
        for(auto u: set2) cout << u << " ";
        cout << endl;
    }

    return 0;
}