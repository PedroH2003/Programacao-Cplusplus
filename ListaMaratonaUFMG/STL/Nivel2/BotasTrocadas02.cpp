#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<pair<int,char>> botas(n); stack<pair<int,char>> aux;

    for(int i=0; i<n; i++){
        int num; char c; cin >> num >> c;
        botas[i] = {num, c};
    }

    sort(botas.begin(), botas.end());
    for(int i=0; i<n; i++){
        if(!aux.empty()){
            pair<int,char> temp = aux.top();
            if(temp.first == botas[i].first and temp.second != botas[i].second){
                aux.pop();
            }
            else{
                aux.push(botas[i]);
            }
        }
        else{
            aux.push(botas[i]);
        }
    }
    int ans = n - aux.size(); ans /= 2;
    cout << ans << endl;

    return 0;
}