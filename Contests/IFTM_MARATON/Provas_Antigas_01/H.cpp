#include <bits/stdc++.h>

using namespace std;

int main(){

    int a,b,c; cin >> a >> b >> c;
    
    if(a == b and a != c) cout << "C" << endl;
    else if(a == c and a != b) cout << "B" << endl;
    else if(b == c and b != a) cout << "A" << endl;
    else cout << "*" << endl; 

    return 0;
}