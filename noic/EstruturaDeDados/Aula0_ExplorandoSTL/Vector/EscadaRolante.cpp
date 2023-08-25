// https://olimpiada.ic.unicamp.br/pratique/pj/2010/f2/escada/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, temp=0; cin >> n;
    vector<int> p(n);

    for(int i=0; i<n; i++){
        cin >> p[i];

        if(i == 0){
            temp += 10;
        }
        else
        {
            int aux = p[i] - p[i-1];
            if(aux < 10){
                temp += aux;
            }
            else{
                temp += 10;
            }
        }
    }

    cout << temp;


    return 0;
}