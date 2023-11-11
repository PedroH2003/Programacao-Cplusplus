#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, c=0, e=0; cin >> n; n = 3*n;
    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];


    sort(v.begin(), v.end());

    for(int i=0; i<n; i+=3){
        c += v[i];
        e += v[i+1];
    }

    if(c != e){
        cout << 'Y';
    }
    else{
        for(int i=n-1; i>=0; i-=3){
            c += v[i];
            e += v[i-1];
        }

        if(c != e){
            cout << 'Y';
        }
        else{
            cout << 'N';
        }
    }



    return 0;
}