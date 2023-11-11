#include <bits/stdc++.h>

using namespace std;

int main(){

    string nome; cin >> nome;
    double a,b; cin >> a >> b;

    a += (b * 0.15);

    cout << fixed << setprecision(2) << "TOTAL = R$ " << a << endl;

    return 0;
}