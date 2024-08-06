#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,ans=0; cin >> n;
    while(n--){
        int zeros=0;
        for(int i=0; i<3; i++){
            int num; cin >> num;
            if(num == 0) zeros++;
        }
        if(zeros < 2) ans+=1; 
    }
    cout << ans << endl;

    return 0;
}