#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        map<char,int> a;

        int maior=1,aux=1;
        char c = s[0];
        for(int i=0; i<n; i++){
            if(a.find(s[i]) == a.end()){
                a[s[i]] = 1;
            }
            else{
                a[s[i]]++;
                aux = a[s[i]];
            }

            if(aux > maior){
                maior = aux;
                c = s[i];
            }
        }

        int menor = 11, pos;
        for(int i=0; i<n; i++){
            int aux2 = a[s[i]];
            if(aux2 <= menor){
                menor = aux2;
                pos = i;
            }
        }
        s[pos] = c;
        cout << s << endl;

    }

    return 0;
}