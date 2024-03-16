#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n, m, b, w; cin >> n >> m;
        char board[110][110], color='B';
        
        int aux = n * m;
        if(aux % 2 == 0){
            b = (aux / 2) + 1;
            w = b - 2;

        }
        else{
            w = aux / 2;
            b = aux - w;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(color == 'B' or w == 0){
                    board[i][j] = 'B';
                    color='W';

                    if(i == n-1 and j == 0 and aux % 2 == 0){
                        color = 'B';
                    }
                }
                else{
                    board[i][j] = 'W';
                    color='B';
                    w--;
                }
                
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout << board[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}