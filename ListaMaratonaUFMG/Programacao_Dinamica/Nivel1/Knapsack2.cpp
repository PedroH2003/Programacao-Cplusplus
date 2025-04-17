#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAX = (100 * 1e3) + 10;

int main(){

    int n,w; cin >> n >> w;
    vector<long long> memo(MAX, INF);
    vector<int> peso(n),valor(n);
    
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> peso[i] >> valor[i];
        sum += valor[i];
    }
    
    memo[0] = 0;
    for(int i=0; i<n; i++){        
        for(int j = sum; j >= valor[i]; j--){
            memo[j] = min(memo[j], memo[j - valor[i]] + peso[i]);
        }
    }

    long long ans;
    for(int i = sum; i>=0; i--) if(memo[i] <= w){
        ans = i;
        break;
    }
    cout << ans << endl;

    return 0;
}