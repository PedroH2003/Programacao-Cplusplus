#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main(){

    int n,m,k; cin >> n >> m >> k;
    vector<int> a(n); for(int i=0; i<n; i++) cin >> a[i];
    vector<int> b(m); for(int i=0; i<m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int p=0,ans=0;
    for(int i=0; i<n; i++){
        int min = a[i] - k, max = a[i] + k;
        for(int j=p; j<m; j++){
            if(b[j] >= min and b[j] <= max){
                ans++; p++;
                break;
            }
            else if(b[j] > max) break;
            p++;
        }
    }
    cout << ans << endl;

    return 0;
}