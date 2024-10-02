#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,m; cin >> n >> m;
        vector<vector<char>> board(n, vector<char>(m));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                board[i][j] = 'B';
                if(i == n-1 and j == m-1) board[i][j] = 'W';
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout << board[i][j];
            }
            cout << endl;
        }

    }
}