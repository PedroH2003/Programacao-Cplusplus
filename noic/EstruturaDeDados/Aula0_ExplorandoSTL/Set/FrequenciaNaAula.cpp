// https://neps.academy/br/exercise/252

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    set<int> alunos;

    while(n--){
        int r; cin >> r;
        alunos.insert(r);
    }

    cout << alunos.size();

    return 0;
}