/*A. Hit the Lottery
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Allen has a LOT of money. He has n
 dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 1
, 5
, 10
, 20
, 100
. What is the minimum number of bills Allen could receive after withdrawing his entire balance?

Input
The first and only line of input contains a single integer n
 (1≤n≤109
).

Output
Output the minimum number of bills that Allen could receive.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, v[5], cont=0, cont2=0, j=4;

    cin >> n;

    v[0] = 1;
    v[1] = 5;
    v[2] = 10;
    v[3] = 20;
    v[4] = 100;

    while(cont != n)
    {
        cont += v[j];
        cont2++;

        if(cont > n)
        {
            cont -= v[j];
            cont2--;
            j--;
        }
    }

    cout << cont2;
 

    return 0;
}