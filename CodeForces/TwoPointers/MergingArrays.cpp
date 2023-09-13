// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m; cin >> n >> m;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    vector<int> b(m);
    for(int i=0; i<m; i++) cin >> b[i];

    vector<int> c(n + m);
    int i=0, j=0;
    while(i < n or j < m){
        if(j == m or i < n and a[i] < b[j]){
            c[i+j] = a[i];
            i++;
        }
        else{
            c[i+j] = b[j];
            j++;
        }
    }

    for(auto u : c) cout << u << " ";


    return 0;
}