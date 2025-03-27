#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAX = 1e5+10;
int n,k;
vector<int> h(MAX);
int memo[MAX];

int main(){ 

    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> h[i];
    memo[0] = 0;

    for(int i=1; i<n; i++){
        memo[i] = INF;
        for(int j=max(0, i-k); j<i; j++){
            memo[i] = min(memo[i], memo[j] + abs(h[i] - h[j]));
        }
    }
    cout << memo[n-1] << endl;

    return 0;
}