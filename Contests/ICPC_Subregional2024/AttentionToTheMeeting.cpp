#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k; cin >> n >> k;
    k -= (n-1);
    k /= n;

    cout << k << endl;

    return 0;
}