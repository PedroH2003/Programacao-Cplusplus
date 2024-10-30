#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<string> p(n); for(int i=0; i<n; i++) cin >> p[i];

    int g; cin >> g;
    map<string, int> d; 
    vector<string> d2;
    for(int i=0; i<g; i++){
        string s; cin >> s;
        d2.push_back(s);
        d.insert({s, 0});

        if(s == "*****") d[s]++;
    }

    set<char> aux;
    for(int i=0; i<5; i++){
        aux.insert(p[0][i]);
    }

    for(int i=1; i<n; i++){
        for(int j=0; j<5; j++){
            if(aux.find(p[i][j]) != aux.end()){
                // cout << p[0][j] << " - " << p[i][j] << endl;
                if(p[0][j] == p[i][j]) p[i][j] = '*';
                else p[i][j] = '!';
            }
            else{
                p[i][j] = 'X';
            }
        }

        // cout << p[i] << endl;

        if(d.find(p[i]) != d.end()){
            d[p[i]]++;
        }
    }
    
    for(int i=0; i<g; i++){
        cout << d[d2[i]] << endl;
    }

    return 0;
}