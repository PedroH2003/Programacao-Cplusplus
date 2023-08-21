// https://www.beecrowd.com.br/judge/pt/problems/view/1661?origem=1

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    while(cin >> n){

        if(n == 0){
            break;
        }

        vector<int> a(n);
        vector<pair<int, int>> v;
        long long dist = 0;

        for(int i=0; i<n; i++){
            cin >> a[i];

            if(a[i] < 0){
                v.push_back(make_pair(a[i]*-1, i));
            }
        }

        for(int i=0; i<v.size(); i++){
            int aux = v[i].first;

            for(int j=0; j<n; j++){
                int auxd = 0;

                if(a[j] >= 0){
                    if(j > v[i].second){
                        auxd = j - v[i].second;
                    }
                    else
                    {
                        auxd = v[i].second - j;
                    }

                    if(a[j] >= aux){
                        a[j] -= aux;
                        dist += (aux * auxd);
                        aux = 0;
                    }
                    else{
                        aux -= a[j];
                        dist += (a[j] * auxd);
                        a[j] = 0;
                    
                    }
                }

                if(aux == 0){
                    break;
                }
            }
        }

        cout << dist << "\n";

    }

    return 0;
}