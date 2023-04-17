/*A. Theatre Square
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.

What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

Input
The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 109).

Output
Write the needed number of flagstones.*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n, m, a;
    cin >> n >> m >> a;
    long long x = n/a + (n%a ? 1 : 0); // arredonda para cima
    long long y = m/a + (m%a ? 1 : 0); // arredonda para cima
    long long ans = x*y;
    cout << ans << endl;

    /*
    No lugar de x = n/a + (n%a ? 1 : 0);
    if(n%a) // Se o resultado der 0 consequentemente será considerado falso
    {
       x = (n/a) + 1;
    }
    else
    {
        x = (n/a) + 0; 
    }
    */


// O PROBLEMA DAS SEGUINTES RESOLUÇÕES PROVAVELMENTE SE DEVE A EU TER USADO INT AO INVÉS DE LONG LONG

/*
    int n, m, a, aux, aux2, resp;
    aux = aux2 = resp = 0;

    cin >> n >> m >> a;

    if(n % a == 0)
    {
        aux = n/a;
    }
    else
    {
        aux = n/a+1;
    }

    if(m % a == 0)
    {
        aux2 = m/a;
    }
    else
    {
        aux2 = m/a+1;
    }
    resp = aux * aux2;
    cout <<resp;
*/

/*
    while(aux < n)
    {
        aux += a;
        resp++;
    }
    temp = resp;
    resp = aux = 0;
    while(aux < m)
    {
        aux += a;
        resp++;
    }

    resp *= temp;
    cout << resp;
*/

    return 0;
}