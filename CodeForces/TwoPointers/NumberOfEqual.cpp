//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m; cin >> n >> m;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    vector<int> b(m);
    for(int i=0; i<m; i++) cin >> b[i];

    int i=0, j=0, aux=0;
    long long ans=0, temp=0;
    while(i < n){
        if(j < m and a[i] == b[j]){
            if(aux == 0){
                temp++;
                ans++;
            }
            else
            {
                ans += temp;
                temp = 1;
                aux = 0;
            }   
            j++;
        }
        else if(j < m and b[j] < a[i]){
            j++;
        }
        else{
            i++;
            if(i < n){
                if(a[i] == a[i-1]){
                    ans += temp;
                    aux = 1;
                }
                else{
                    temp = 0;
                    aux = 0;
                }
            }
        }
        
    }

    cout << ans;

    return 0;
}