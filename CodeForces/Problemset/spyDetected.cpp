/*A. Spy Detected!
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given an array a
 consisting of n
 (n≥3
) positive integers. It is known that in this array, all the numbers except one are the same (for example, in the array [4,11,4,4]
 all numbers except one are equal to 4
).

Print the index of the element that does not equal others. The numbers in the array are numbered from one.

Input
The first line contains a single integer t
 (1≤t≤100
). Then t
 test cases follow.

The first line of each test case contains a single integer n
 (3≤n≤100
) — the length of the array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤100
).

It is guaranteed that all the numbers except one in the a
 array are the same.

Output
For each test case, output a single integer — the index of the element that is not equal to others.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, i=1, num, resp=-1;
    vector<int> a;

    cin >> t;

    while(t--)
    {
        cin >> n;
        a.resize(n);

        cin >> a[0];
        num = a[0];
        while(i < n)
        {
            cin >> a[i];

            if(a[i] != num)
            {
                if(resp == -1)
                {
                    resp = i+1;
                }
                else
                {
                    resp = 1;
                    num = a[1];
                }
                
            }

            i++;
        }

        cout << resp << "\n";
        resp = -1;
        a.clear();
        i = 1;
    }



    return 0;
}