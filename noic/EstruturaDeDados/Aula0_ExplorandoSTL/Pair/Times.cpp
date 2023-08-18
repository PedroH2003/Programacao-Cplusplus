#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, t; cin >> n >> t;
    vector<pair<int, string>> alunos;
    vector<vector<string>> times(t);

    for(int i=0; i<n; i++){
        string nome; int h;
        
        cin >> nome >> h;
        alunos.push_back(make_pair(h, nome));
    }
    sort(alunos.begin(), alunos.end());

    int j=0;
    for(int i=n-1; i>=0; i--){
        times[j].push_back(alunos[i].second);
        j++;

        if(j == t){
            j = 0;
        }
    }

    for(int i=0; i<t; i++){
        cout << "Time " << i+1 << "\n";

        sort(times[i].begin(), times[i].end());
        for(j=0; j<times[i].size(); j++){
            cout << times[i][j] << "\n";
        }
        cout << "\n";
    }


    return 0;
}