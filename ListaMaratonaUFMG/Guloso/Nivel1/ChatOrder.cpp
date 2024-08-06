#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin>>n;
    stack<string> pilha;
    set<string> aux;

    while(n--){
        string s; cin >> s;
        pilha.push(s);
    }
    while(!pilha.empty()){
        if(aux.find(pilha.top()) == aux.end()) cout << pilha.top() << endl;
        aux.insert(pilha.top());
        pilha.pop();
    }

    return 0;
}