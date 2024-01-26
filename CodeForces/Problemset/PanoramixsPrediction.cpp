#include <bits/stdc++.h>

using namespace std;

bool eh_primo(int num){   
    for(int i=2; i<num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    int n, m; cin >> n >> m;
    string ans = "YES";

    if(eh_primo(m)){
        for(int i=m-1; i>n; i--){
            if(eh_primo(i)){
                ans = "NO";
                break;
            }
        }
    }
    else{
        ans = "NO";
    }

    cout << ans;


    return 0;
};