#include <bits/stdc++.h>

using namespace std;

int main(){

    int v[4];

    for(int i=0; i<4; i++) cin >> v[i];

    int aux=0,aux2;
    while(aux < 4){
        aux2 = v[aux];
        v[aux] = 0;
        int temp;

        for(int i=0; i<4; i++){
            if(i > aux){
                temp = i - aux;
            }
            else if(i < aux){
                temp = aux - i;
            }

            if(i != aux and temp != v[i]){
                temp = -1;
                break;
            }
        }

        if(temp != -1){
            cout << aux+1;
            break;
        }

        v[aux] = aux2;
        aux++;
    }

    return 0;
}