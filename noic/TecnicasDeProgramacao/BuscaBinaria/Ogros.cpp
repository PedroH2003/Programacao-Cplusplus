// https://olimpiada.ic.unicamp.br/pratique/p2/2008/f1/ogros/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m; cin >> n >> m;
    vector<int> a (n-1); vector<int> f (n); vector<int> ogro (m);

    for(int i=0; i<n-1; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> f[i];
    }

    for(int i=0; i<m; i++){
        cin >> ogro[i];

        int l=1; int r=n-1; int m;
        while(l < r){
            m = (l+r)/2;

            if(a[m-1] > ogro[i]){
                r = m;
            }
            else{
                l = m+1;
            }
        }
        m = r;

        if(m == n-1){
            if(a[m-1] <= ogro[i]){
                m++;
            }
        }

        ogro[i] = f[m-1];
    }

    for(int i=0; i<m; i++){
        cout << ogro[i] << " ";
    }


    return 0;
}