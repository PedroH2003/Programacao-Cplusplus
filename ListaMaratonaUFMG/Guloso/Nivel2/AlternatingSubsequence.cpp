#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n); for(int i=0; i<n; i++) cin >> a[i];
        long long ans = 0;

        int flag = 0, maior = -INF;
        if(a[0] > 0) flag = 1;

        for(int i=0; i<n; i++){
            if(a[i] > 0){
                if(!flag){
                    ans += maior;
                    flag = 1;
                    maior = -INF;
                }
                maior = max(maior, a[i]);

            }else{
                if(flag){
                    ans += maior;
                    flag = 0;
                    maior = -INF;
                }
                maior = max(maior, a[i]);
            }
        }
        ans += maior;
        cout << ans << endl;
    }


    return 0;
}