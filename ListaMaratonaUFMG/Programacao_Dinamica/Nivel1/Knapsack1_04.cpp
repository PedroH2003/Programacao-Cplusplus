#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAX = 1e5+10;




int main(){

    int n,w; cin >> n >> w;
    vector<long long> memo(MAX);

    for(int i=0; i<n; i++){
        int peso,valor; cin >> peso >> valor;

        for(int j = w; j >= peso; j--){
            memo[j] = max(memo[j], memo[j - peso] + valor);
        }
    }
    cout << memo[w] << endl;

    return 0;
}