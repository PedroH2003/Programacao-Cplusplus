#include <bits/stdc++.h>

using namespace std;

int n;
vector<pair<int, int>> v (n, {0, 0});

void tempo(int menor){
    cout << "oi";
    for(int i=0; i<n; i++){
        v[i].second -= menor;
    }
}



int main(){

    int l; cin >> n >> l;
    queue<int> lig;
    cout << v[0].first;

    while(l--){
        int num; cin >> num;
        lig.push(num);
    }

    while(!lig.empty()){
        cout << "oi";
        int menor = lig.front();

        for(int i=0; i<n; i++){
            if(!lig.empty()){
                cout << "oi";
                cout << v[i].second;
                if(v[i].second == 0){
                    cout << "oi";
                    v[i].first++;
                    v[i].second = lig.front();
                    lig.pop();
                }
                cout << "oi";
                if(v[i].second < menor){
                    menor = v[i].second;
                }
            }
            else
            {
                break;
            }
            cout << "oi";
        }

        if(!lig.empty()){
            tempo(menor);
        }

        cout << "Oi";
    }

    for(int i=0; i<n; i++){
        cout << i+1 << " " << v[i].first << "\n";
    }

    return 0;
}