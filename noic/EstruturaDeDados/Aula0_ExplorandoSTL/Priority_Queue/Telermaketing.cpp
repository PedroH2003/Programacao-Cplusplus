// https://olimpiada.ic.unicamp.br/pratique/p2/2007/f2/tele/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, l; cin >> n >> l;
    queue<int> lig;
    vector<pair<int, int>> v (n, {0, 0});

    while(l--){
        int num; cin >> num;
        lig.push(num);
    }

    while(!lig.empty()){
        int menor = lig.front();

        for(int i=0; i<n; i++){
            if(!lig.empty()){
                if(v[i].second == 0){
                    v[i].first++;
                    v[i].second = lig.front();
                    lig.pop();
                }
                if(v[i].second < menor){
                    menor = v[i].second;
                }
            }
            else
            {
                break;
            }
        }

        if(!lig.empty()){
            for(int i=0; i<n; i++){
                v[i].second -= menor;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << i+1 << " " << v[i].first << "\n";
    }

    return 0;
}