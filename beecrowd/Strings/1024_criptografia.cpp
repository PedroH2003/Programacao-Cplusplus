#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int n, metade;
    string c;

    cin >> n;

    while(n != 0)
    {
        cin.ignore();
        getline(cin, c);

        if(c.size() % 2 == 0)
        {
            metade = (c.size() / 2);
        }
        else
        {
            metade = (c.size() / 2)+1;
        }

        for(int i=0; i<c.size(); i++)
        {
            if((c[i] >= 'a' and c[i] <= 'z') or (c[i] >= 'A' and c[i] <= 'Z'))
            {
                c[i] += 3;
            }

            if(metade > 0)
            {
                c[i] -= 1;
                metade--;
            }
        }



        for(int i=c.size(); i>=0; i--)
        {
            cout << c[i];
        }
        cout << "\n";

        n--;
    }


    return 0;
}