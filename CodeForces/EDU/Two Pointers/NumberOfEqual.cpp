#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m; cin >> n >> m;
    vector<int> a(n), b(m); 
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    int i=0,j=0;
    long long ans=0;
    while(i < n and j < m){
        if(a[i] == b[j]){

            long long sum_a = 0;
            int val = a[i];
            while(i < n and a[i] == val){
                sum_a++;
                i++;
            }

            long long sum_b = 0;
            val = b[j];
            while(j < m and b[j] == val){
                sum_b++;
                j++;
            }

            ans += (sum_a * sum_b);
        }
        else if(a[i] < b[j]) i++;
        else j++;
    }
    cout << ans << endl;

    return 0;
}