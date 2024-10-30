#include <bits/stdc++.h>

using namespace std;

int n;
vector<vector<int>> m;
vector<vector<int>> aux;

bool linha(){
    for(int i=0; i<n; i++){
        int temp = m[i][0];
        for(int j=0; j<n; j++){
            if(temp <= m[i][j]){
                temp = m[i][j];
            }
            else{
                return false;
            }
        }
    }
    return true;
}

bool coluna(){
    for(int i=0; i<n; i++){
        int temp = m[0][i];
        for(int j=0; j<n; j++){
            if(temp <= m[j][i]){
                temp = m[j][i];
            }
            else{
                return false;
            }
        }
    }
    return true;
}

int main(){
    int ans=0;
    cin >> n;
    m.resize(n);
    aux.resize(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int num; cin >> num;
            m[i].push_back(num);
            aux[i].push_back(num); 
        }
    }

    while(!linha() or !coluna()){
        ans++;
        for(int i=0; i<n; i++){
            int w=n-1;
            for(int j=0; j<n; j++){
                aux[w][i] = m[i][j]; 
                w--;
            }
        }
        m = aux;           
    }
    cout << ans << endl;

    return 0;
}