/*There is a frog staying to the left of the string s=s1s2…sn
 consisting of n
 characters (to be more precise, the frog initially stays at the cell 0
). Each character of s
 is either 'L' or 'R'. It means that if the frog is staying at the i
-th cell and the i
-th character is 'L', the frog can jump only to the left. If the frog is staying at the i
-th cell and the i
-th character is 'R', the frog can jump only to the right. The frog can jump only to the right from the cell 0
.

Note that the frog can jump into the same cell twice and can perform as many jumps as it needs.

The frog wants to reach the n+1
-th cell. The frog chooses some positive integer value d
 before the first jump (and cannot change it later) and jumps by no more than d
 cells at once. I.e. if the i
-th character is 'L' then the frog can jump to any cell in a range [max(0,i−d);i−1]
, and if the i
-th character is 'R' then the frog can jump to any cell in a range [i+1;min(n+1;i+d)]
.

The frog doesn't want to jump far, so your task is to find the minimum possible value of d
 such that the frog can reach the cell n+1
 from the cell 0
 if it can jump by no more than d
 cells at once. It is guaranteed that it is always possible to reach n+1
 from 0
.

You have to answer t
 independent test cases.

Input
The first line of the input contains one integer t
 (1≤t≤104
) — the number of test cases.

The next t
 lines describe test cases. The i
-th test case is described as a string s
 consisting of at least 1
 and at most 2⋅105
 characters 'L' and 'R'.

It is guaranteed that the sum of lengths of strings over all test cases does not exceed 2⋅105
 (∑|s|≤2⋅105
).

Output
For each test case, print the answer — the minimum possible value of d
 such that the frog can reach the cell n+1
 from the cell 0
 if it jumps by no more than d
 at once.*/

#include <bits/stdc++.h>

using namespace std;


int possivel(string s, int m)
{
    int eh_possivel = 1, auxm = m, aux=0;

    for(int i=0; i<s.size(); i++)
    {
        if(m != 1)
        {
            if(i==0 and aux == 0)
            {
                auxm = m-1;
            }
            else
            {
                auxm = m;
            }
            

            if(i+auxm < s.size())
            {
                int auxm2 = m;

                while(s[i+auxm] != 'R' and auxm2 > 0 and auxm >= 0)
                {
                    auxm2--;
                    auxm--;
                }

                if(auxm2 == 0)
                {
                    eh_possivel = 0;
                    break;
                }
                else
                {
                    i = i+auxm;
                    i--;
                    if(i < 0)
                    {
                        aux = 1;
                    }
                }
            }
            else if(i+m >= s.size())
            {
                break;
            }
        }
        else
        {
            if(s[i] != 'R')
            {
                eh_possivel = 0;
                break;
            }
        }
        
    }

    return eh_possivel;
}

int main()
{
    int t; cin >> t;
    string s;

    

    while(t--)
    {
        cin >> s;
        int l = 0, r = 2e6, m;

        while(l < r)
        {
            m = (l+r) / 2;

            if(m == 0)
            {
                break;
            }

            if(possivel(s, m))
            {
                //cout << l << " " << m << " " << r << " Possivel\n";
                r = m;
            }
            else
            {
                //cout << l << " " << m << " " << r << " Nao possivel\n";
                l = m+1;
            }
        }

        cout << r << "\n";
    }


    return 0;
}