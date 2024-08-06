#include <bits/stdc++.h>

using namespace std;

bool eh_primo(int n){
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;

    int raiz = sqrt(n);
    for(int i=3; i<=raiz; i+=2){
        if(n % i == 0) return false;
    }

    return true;
}

int main(){

    int n; cin >> n;

    if(eh_primo(n)) cout << "sim" << endl;
    else cout << "nao" << endl;

    return 0;
}