#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n,m,k; cin >> n >> m >> k;
    vector<long long> a(n),b(m);
    for(int i=0; i<n; i++){
        cin >> a[i];
    } 
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long ans=0;
    int pos=0;
    for(int i=0; i<n; i++){
        for(int j=pos; j < m; j++){
            if(b[j] >= (a[i] - k) and b[j] <= (a[i] + k)){
                ans++;
                pos++;
                break;
            }

            if(b[j] > (a[i] - k)){
                break;
            }

            pos++;
        }
    }
    cout << ans << endl;

    return 0;
}