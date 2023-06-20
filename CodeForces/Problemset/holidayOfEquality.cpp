/*A. Holiday Of Equality
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
In Berland it is the holiday of equality. In honor of the holiday the king decided to equalize the welfare of all citizens in Berland by the expense of the state treasury.

Totally in Berland there are n citizens, the welfare of each of them is estimated as the integer in ai burles (burle is the currency in Berland).

You are the royal treasurer, which needs to count the minimum charges of the kingdom on the king's present. The king can only give money, he hasn't a power to take away them.

Input
The first line contains the integer n (1 ≤ n ≤ 100) — the number of citizens in the kingdom.

The second line contains n integers a1, a2, ..., an, where ai (0 ≤ ai ≤ 106) — the welfare of the i-th citizen.

Output
In the only line print the integer S — the minimum number of burles which are had to spend.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, maior, cont=0; cin >> n;
    vector<int> a; a.resize(n);

    for(int i=0; i<n; i++) { cin >> a[i]; } 
    
    sort(a.begin(), a.end());
    maior = a[n-1];
    
    for(int i=0; i<n-1; i++)
    {
        cont += maior - a[i];
    }

    cout << cont;

    return 0;
}