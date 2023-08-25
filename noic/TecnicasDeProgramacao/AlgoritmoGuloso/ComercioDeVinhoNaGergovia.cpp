// https://www.beecrowd.com.br/judge/pt/problems/view/1661?origem=1


// Deu time limit, aparentemente aplicando two pointes eu posso resolver isso

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    while(cin >> n){

        if(n == 0){
            break;
        }

        vector<pair<int, int>> a;
        vector<pair<int, int>> v;
        long long dist = 0;
        int temp;

        for(int i=0; i<n; i++){
            cin >> temp;

            if(temp < 0){
                v.push_back(make_pair(temp*-1, i));
            }
            else{
                a.push_back(make_pair(temp, i));
            }
        }
        
        for(int i=0; i<v.size(); i++){
            int aux = v[i].first;

            for(int j=0; j<a.size(); j++){
                int auxd = 0;

                if(a[j].first >= 0){
                    if(a[j].second > v[i].second){
                        auxd = a[j].second - v[i].second;
                    }
                    else
                    {
                        auxd = v[i].second - a[j].second;
                    }

                    if(a[j].first >= aux){
                        a[j].first -= aux;
                        dist += (aux * auxd);
                        aux = 0;
                    }
                    else{
                        aux -= a[j].first;
                        dist += (a[j].first * auxd);
                        a[j].first = 0;
                    
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