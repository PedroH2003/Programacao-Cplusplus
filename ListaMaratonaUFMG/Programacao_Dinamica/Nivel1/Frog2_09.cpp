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

    memset(memo, INF, sizeof memo);
    memo[0] = 0;
    for(int i=0; i<n; i++){
        for(int j = i+1; j < min((i + k)+1, n); j++){
            memo[j] = min(memo[j], memo[i] + abs(h[i] - h[j]));
        }
    }
    cout << memo[n-1] << endl;

    return 0;
}