#include <bits/stdc++.h>

using namespace std;

int main(){

    queue<char> camp;
    int jogos=15;
    char aux = 'A';

    for(int i=0; i<16; i++){
        camp.push(aux+i);
    }


    while(jogos--){
        int m, n; cin >> m >> n;
        char num;

        if(m > n){
            num = camp.front();
            camp.pop(); camp.pop();
            camp.push(num);
        }
        else
        {
            camp.pop();
            num = camp.front();
            camp.pop();
            camp.push(num);
        }
    }

    cout << camp.front();

    return 0;
}