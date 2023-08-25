// https://codeforces.com/problemset/problem/1133/C

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<int> a (n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int j=0; int i=0; int cont=1; int maior=1;
    while(j < n){
        if(j != i and a[j] - a[i] <= 5){
            cont++;
            j++;
        }
        else if(j == i){
            j++;
        }
        else{
            i++;
            cont--;
            if(cont == 0){
                cont = 1;
            }
        }

        if(cont > maior){
            maior = cont;
        }
    }

    cout << maior;


    return 0;
}