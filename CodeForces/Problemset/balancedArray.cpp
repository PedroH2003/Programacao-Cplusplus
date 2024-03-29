/*You are given a positive integer n
, it is guaranteed that n
 is even (i.e. divisible by 2
).

You want to construct the array a
 of length n
 such that:

The first n2
 elements of a
 are even (divisible by 2
);
the second n2
 elements of a
 are odd (not divisible by 2
);
all elements of a
 are distinct and positive;
the sum of the first half equals to the sum of the second half (∑i=1n2ai=∑i=n2+1nai
).
If there are multiple answers, you can print any. It is not guaranteed that the answer exists.

You have to answer t
 independent test cases.

Input
The first line of the input contains one integer t
 (1≤t≤104
) — the number of test cases. Then t
 test cases follow.

The only line of the test case contains one integer n
 (2≤n≤2⋅105
) — the length of the array. It is guaranteed that that n
 is even (i.e. divisible by 2
).

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
 (∑n≤2⋅105
).

Output
For each test case, print the answer — "NO" (without quotes), if there is no suitable answer for the given test case or "YES" in the first line and any suitable array a1,a2,…,an
 (1≤ai≤109
) satisfying conditions from the problem statement on the second line.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, d, d2, aux=2; cin >> t;
    string resp1 = "YES";
    vector<int> resp2;

    while(t--)
    {   
        cin >> n;
        d = n/2;

        if(d % 2 != 0)
        {
            resp1 = "NO";
        }
        else
        {
            while(d > 0)
            {
                resp2.push_back(aux);
                aux += 2;
                d--;
            }
            d2 = (n/2)/2;

            while(d < n/2)
            {
                if(d2 > 0)
                {
                    aux = resp2[d] - 1;
                    d2--;
                }
                else
                {
                    aux = resp2[d] + 1;
                }
                
                resp2.push_back(aux);

                d++;
            }

        }

        cout << resp1 << "\n";
        if(resp1 == "YES")
        {
            for(int i: resp2)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        resp1 = "YES";
        aux = 2;
        resp2.clear();
    }


    return 0;
}