// https://codeforces.com/contest/1333/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){

        int n, m, w; cin >> n >> m;
        int aux = n * m;
        string cor="";
        char atual = 'B';

        if(aux % 2 == 0){
            w = (aux / 2) - 1;
        }
        else{
            w = aux / 2;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i == n-1 and j == 0 and aux % 2 == 0 and atual == 'B')
                {
                    cor += atual;
                }
                else{
                    if(w > 0){
                        cor += atual;
                        if(atual == 'W'){
                            w--;
                            atual = 'B';
                        }
                        else
                        {
                            atual = 'W';
                        }

                    }
                    else
                    {
                        atual = 'B';
                        cor += atual;
                    }                    
                }
            }
            cout << cor << "\n";
            cor = "";

        }

    }

    return 0;
}