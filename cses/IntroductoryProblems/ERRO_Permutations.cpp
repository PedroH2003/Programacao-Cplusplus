//ESSA SOLUÇÃO NÃO É UTIL, EXCEDE O TIME LIMIT


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main(){

    int n; cin >> n;
    vector<int> v(n); for(int i=0; i<n; i++) v[i] = i+1;

    int flag=1;
    do{
        flag = 1;
        for(int i=1; i<n; i++){
            if(abs(v[i] - v[i-1]) == 1){
                flag = 0;
                break;
            }
        }
        if(flag) break;

    }while(next_permutation(v.begin(), v.end()));

    if(flag){
        for(auto u: v) cout << u << " ";
        cout << endl;
    }
    else cout << "NO SOLUTION" << endl;

    return 0;
}