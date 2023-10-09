// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k; cin >> n >> k;
    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    for(int i=0; i<k; i++){
        string ans = "NO";
        int num; cin >> num;
        int aux = lower_bound(v.begin(), v.end(), num) - v.begin();
        if(aux < n and v[aux] == num){
            ans = "YES";
        }
        cout << ans << endl; 
    }

    return 0;
}