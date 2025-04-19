/*
DEU TIME LIMIT EXCEEDED
*/

#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f, MAX = 2e5+10;
int n;
vector<int> a(MAX);
int memo[MAX];
int pos, maior = 1;

int dp(int s){
    if(s == 0) return 1;
    if(memo[s] != -1) return memo[s];

    for(int i=s-1; i>=0; i--){
        if(a[s] == a[i]+1){
            memo[s] = dp(i) + 1;
            if(memo[s] > maior){
                maior = memo[s];
                pos = s;
            }
            return memo[s];
        }
    }

    return 1;
}

int main(){

    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    memset(memo, -1, sizeof memo);
    pos = n-1;
    for(int i=n-1; i>=0; i--){
        dp(i);
    }
    
    cout << maior << endl;
    int aux = a[pos];
    vector<int> ans; ans.push_back(pos); 
    for(int i=pos-1; i>=0; i--){
        if(aux == a[i]+1){
            ans.push_back(i);
            aux = a[i];
        }
    }
    for(int i=ans.size()-1; i>=0; i--){
        cout << ans[i] + 1 << " ";
    }


    return 0;
}