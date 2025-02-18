#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m,k,ans=0; cin >> n >> m >> k;
    vector<int> a(n),b(m);

    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int pos=0;
    for(int i=0; i<n; i++){
        int min = a[i] - k, max = a[i] + k;
        for(int j=pos; j<m; j++){
            if(b[j] >= min and b[j] <= max){
                ans++;
                pos++;
                break;
            }
            else if(b[j] > max){
                break;
            }
            pos++;
        }
    }
    cout << ans << endl;

    return 0;
}