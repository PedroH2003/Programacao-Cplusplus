#include <bits/stdc++.h>

using namespace std;

const int MAX = 1000;       

int m, n;
char M[MAX][MAX];
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};


bool val(pair<int, int> u){
    return u.first < 0 or u.first >= m or u.second < 0 or u.second >= n or M[u.first][u.second] == '.';
}

bool eh_costa(pair<int, int> s){

    for(auto u: mov){
        u.first += s.first;
        u.second += s.second;

        if(val(u)){
            return true;
        }

    }

    return false;
}

int main(){

    cin >> m >> n;
    vector<pair<int, int>> terras;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> M[i][j];

            if(M[i][j] == '#'){
                terras.push_back(make_pair(i, j));
            }
        }
    }

    int ans=0;
    for(int i=0; i<terras.size(); i++){
        if(eh_costa(terras[i])){
            ans++;
        }
    }
    
    cout << ans;


    return 0;
}