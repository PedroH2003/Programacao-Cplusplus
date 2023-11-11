#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<string> dic(n);
    for(int i=0; i<n; i++) cin >> dic[i];
    string ps = dic[0];

    int g; cin >> g;
    vector<string> grid(g);
    vector<int> ans(g);
    for(int i=0; i<g; i++) cin >> grid[i];

    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            if(dic[i][j] == ps[0]){
                if(j == 0){
                    dic[i][j] = '*';
                }
                else{
                    dic[i][j] = '!';
                }
            }
            else if(dic[i][j] == ps[1]){
                if(j == 1){
                    dic[i][j] = '*';
                }
                else{
                    dic[i][j] = '!';
                }                
            }
            else if(dic[i][j] == ps[2]){
                if(j == 2){
                    dic[i][j] = '*';
                }
                else{
                    dic[i][j] = '!';
                }
            }
            else if(dic[i][j] == ps[3]){
                if(j == 3){
                    dic[i][j] = '*';
                }
                else{
                    dic[i][j] = '!';
                }
            }
            else if(dic[i][j] == ps[4]){
                if(j == 4){
                    dic[i][j] = '*';
                }
                else{
                    dic[i][j] = '!';
                }
            }
            else{
                dic[i][j] = 'X';
            }                                              
        }
    }

    for(int i=0; i<g; i++){
        for(auto u: dic){
            if(grid[i] == u){
                ans[i]++;
            }
        }
    }

    for(auto u: ans) cout << u << endl;

    return 0;
}