/*There is a string s
 of length 3
, consisting of uppercase and lowercase English letters. Check if it is equal to "YES" (without quotes), where each letter can be in any case. For example, "yES", "Yes", "yes" are all allowable.

Input
The first line of the input contains an integer t
 (1≤t≤103
) — the number of testcases.

The description of each test consists of one line containing one string s
 consisting of three characters. Each character of s
 is either an uppercase or lowercase English letter.

Output
For each test case, output "YES" (without quotes) if s
 satisfies the condition, and "NO" (without quotes) otherwise.

You can output "YES" and "NO" in any case (for example, strings "yES", "yes" and "Yes" will be recognized as a positive response).*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    string resp = "YES";


    while(t--)
    {
        string s; cin >> s;

        for(int i=0; i<3; i++)
        {
            if(s[i] >= 'a' and s[i] <= 'z')
            {
                s[i] -= 32;
            }
        }

        if(s == resp)
        {
            cout << resp << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }


    return 0;
}