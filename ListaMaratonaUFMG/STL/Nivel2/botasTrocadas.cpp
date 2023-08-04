#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, resp=0; cin >> n;
    vector<pair<int, char>> botas;

    while(n--){
        int m; char l; cin >> m >> l;

        botas.push_back(make_pair(m, l));
    }

    for(int i=0; i<botas.size(); i++){
        for(int j=0; j<botas.size(); j++){
            if(botas[i].first == botas[j].first and botas[i].second != botas[j].second){
                resp++;
                botas[i].first = botas[j].first = -1;
                botas[i].second = botas[j].second = 'N';
                break;
            }
        }
    }

    cout << resp;

    return 0;
}