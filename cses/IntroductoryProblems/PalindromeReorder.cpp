#include <bits/stdc++.h>

using namespace std;

int main(){

    string s; cin >> s;
    int aux = s.size() / 2;
    vector<char> a(aux),b(aux);

    sort(s.begin(), s.end());
    int j=0,k=aux-1,ans=1;
    char impar = 'a';
    for(int i=0; i<s.size() and ans; i+=2){
        if(i != s.size()-1 and s[i] == s[i+1]){
            a[j] = s[i];
            b[k] = s[i+1];
            j++; k--;
        }else{
            if(impar == 'a') impar = s[i];
            else ans = 0;
            i--;
        }
    }

    if(ans){
        for(int i=0; i<aux; i++){
            cout << a[i];
        }
        if(impar != 'a') cout << impar;
        for(int i=0; i<aux; i++){
            cout << b[i];
        }
        cout << endl;

    }else cout << "NO SOLUTION" << endl;


    return 0;
}