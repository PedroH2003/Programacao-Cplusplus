#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, d; 
    while (cin >> n >> d and n and d){
        string num, aux; cin >> num;
        int cont = 0;

        for(int i=0; i<num.size(); i++){
            while(aux.size() > 0 and num[i] > aux.back() and cont < d){
                aux.pop_back();
                cont++;
            }

            if(aux.size() < n-d){
                aux.push_back(num[i]);
            }
        }

        cout << aux << endl;
    }

    return 0;
}