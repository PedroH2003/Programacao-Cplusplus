#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b; cin >> a >> b;
    double c; cin >> c;

    double salario = c*b;

    cout << "NUMBER = " << a << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << salario << endl;

    return 0;
}