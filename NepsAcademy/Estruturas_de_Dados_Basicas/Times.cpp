#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, t; cin >> n >> t;
    priority_queue<pair<int, string>> alunos;
    vector<vector<string>> times (t); 

    for(int i=0; i<n; i++){
        string nome; 
        int nivel;
        cin >> nome >> nivel;
        alunos.push({nivel, nome});
    }

    int j=0;
    for(int i=0; i<n; i++){
        string aux = alunos.top().second;
        alunos.pop();

        if(j < t){
            times[j].push_back(aux);
            j++;
        }
        else{
            j = 0;
            times[j].push_back(aux);
            j++;
        }

    }

    for(int i=0; i<t; i++){
        cout << "Time " << i+1 << endl;
        sort(times[i].begin(), times[i].end());

        for(int j=0; j<times[i].size(); j++){
            cout << times[i][j] << endl;
        }
        cout << endl;
    }

    return 0;
}