/*A. Kefa and First Steps
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Kefa decided to make some money doing business on the Internet for exactly n days. He knows that on the i-th day (1 ≤ i ≤ n) he makes ai money. Kefa loves progress, that's why he wants to know the length of the maximum non-decreasing subsegment in sequence ai. Let us remind you that the subsegment of the sequence is its continuous fragment. A subsegment of numbers is called non-decreasing if all numbers in it follow in the non-decreasing order.

Help Kefa cope with this task!

Input
The first line contains integer n (1 ≤ n ≤ 105).

The second line contains n integers a1,  a2,  ...,  an (1 ≤ ai ≤ 109).

Output
Print a single integer — the length of the maximum non-decreasing subsegment of sequence a.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, a, ant=0, maior=0, cont=0;

    cin >> n;

    while(n != 0)
    {
        cin >> a;
        
        if(a >= ant)
        {
            cont++;
        }
        else
        {
            cont = 1;
        }

        if(cont > maior)
        {
            maior = cont;
        }

        ant = a;

        n--;
    }

    cout << maior;


    return 0;
}