/*A. Remove Smallest
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given the array a
 consisting of n
 positive (greater than zero) integers.

In one move, you can choose two indices i
 and j
 (i≠j
) such that the absolute difference between ai
 and aj
 is no more than one (|ai−aj|≤1
) and remove the smallest of these two elements. If two elements are equal, you can remove any of them (but exactly one).

Your task is to find if it is possible to obtain the array consisting of only one element using several (possibly, zero) such moves or not.

You have to answer t
 independent test cases.

Input
The first line of the input contains one integer t
 (1≤t≤1000
) — the number of test cases. Then t
 test cases follow.

The first line of the test case contains one integer n
 (1≤n≤50
) — the length of a
. The second line of the test case contains n
 integers a1,a2,…,an
 (1≤ai≤100
), where ai
 is the i
-th element of a
.

Output
For each test case, print the answer: "YES" if it is possible to obtain the array consisting of only one element using several (possibly, zero) moves described in the problem statement, or "NO" otherwise.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, num, dif;
    vector<int> a;
    string resp = "YES";

    cin >> t;

    while(t--)
    {
        cin >> n;

        while(n--)
        {
            cin >> num;
            a.push_back(num);
        }
        n = a.size();
        sort(a.begin(), a.end());

        for(int i=0; i<n; i++)
        {
            if(i != n-1)
            {
                dif = a[i+1] - a[i];
                if(dif > 1) 
                {
                    resp = "NO";
                    break;
                }
            }
        }
        cout << resp << "\n";
        a.clear();
        resp = "YES";
    }

    return 0;
}