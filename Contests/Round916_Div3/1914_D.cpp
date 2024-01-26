#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<pair<int, int>> a(n), b(n), c(n);

        for(int i=0; i<n; i++){
            int aux; cin >> aux;
            a[i] = {aux, i};
        }
        sort(a.begin(), a.end());

        for(int i=0; i<n; i++){
            int aux; cin >> aux;
            b[i] = {aux, i};
        }
        sort(b.begin(), b.end());

        for(int i=0; i<n; i++){
            int aux; cin >> aux;
            c[i] = {aux, i};
        }
        sort(c.begin(), c.end());

        int cont=0;
        int ca=n-1, cb=n-1, cc=n-1;
        while(true){
            if(a[ca].second != b[cb].second and a[ca].second != c[cc].second){
                cont += a[ca].first + b[cb].first + c[cc].first;
                break;
            }
            else if(a[ca].second != b[cb].second and a[ca].second == c[cc].second){
                if(a[ca].first > c[cc].first){
                    cc--;
                } 
                else if(a[ca].first < c[cc].first){
                    ca--;
                }
                else{
                    if(a[ca-1].first > c[cc-1].first){
                        ca--;
                    } 
                    else{
                        cc--;
                    }                    
                }
            }
            else if(a[ca].second != c[cc].second and a[ca].second == b[cb].second){
                if(a[ca].first > b[cb].first){
                    cb--;
                } 
                else if(a[ca].first < b[cb].first){
                    ca--;
                }
                else{
                    if(a[ca-1].first > b[cb-1].first){
                        ca--;
                    } 
                    else{
                        cb--;
                    }                    
                }                
            }
            else if(a[ca].second != b[cb].second and b[cb].second == c[cc].second){
                if(c[cc].first > b[cb].first){
                    cb--;
                } 
                else if(c[cc].first < b[cb].first){
                    cc--;
                }
                else{
                    if(c[cc-1].first > b[cb-1].first){
                        cc--;
                    } 
                    else{
                        cb--;
                    }                    
                }                
            }
            else{
                int menor = min(a[ca].first, b[cb].first);
                int menor2 = min(menor, c[cc].first);

                if(menor2 == a[ca].first and menor2 != b[cb].first and menor2 != c[cc].first){
                    ca--;
                }
                else if(menor2 == b[cb].first and menor2 != a[ca].first and menor2 != c[cc].first){
                    cb--;
                }
                else if(menor2 == c[cc].first and menor2 != a[ca].first and menor2 != b[cb].first){
                    cc--;
                }
                else{
                    int maior = max(a[ca-1].first, b[cb-1].first);
                    int maior2 = max(maior, c[cc-1].first);
                    if(maior2 == a[ca-1].first){
                        ca--;
                    }
                    else if(maior2 == b[cb-1].first){
                        cb--;
                    }
                    else{
                        cc--;
                    }

                }

            }
        
        }

        cout << cont << endl;

    }

    return 0;
}