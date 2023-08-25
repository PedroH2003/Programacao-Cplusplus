// https://codeforces.com/problemset/problem/1301/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    string a, b, c, resp="YES";


    while(t--)
    {
        cin >> a >> b >> c;

        for(int i=0; i<a.size(); i++)
        {
            if((a[i] != b[i]) or (a[i] == c[i] and b[i] == c[i]))
            {
                if(c[i] != a[i] and c[i] != b[i])
                {
                    resp = "NO";
                    break;
                }
            }
            else
            {
                resp = "NO";
                break;
            }
        }

        cout << resp << "\n";
        resp = "YES";
    }

    return 0;
}