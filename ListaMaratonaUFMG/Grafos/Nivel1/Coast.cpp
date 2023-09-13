// https://neps.academy/exercise/329

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n; cin >> m >> n;
    int auxm = 0, auxn = n, costa=0;
    set<pair<int, int>> terra;

    while(auxm < m)
    {
        string s; cin >> s;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '#')
            {
                terra.insert(make_pair(auxm, i));
            }
        }
        auxm++;
    }

    for(auto it = terra.begin(); it != terra.end(); it++)
    {
        int y, x; y = it->first; x = it->second;

        if(x > 0)
        {
            x--;
            if(terra.find(make_pair(y, x)) == terra.end())
            {
                costa++;
                continue;
            }
            x++;
        }
        else
        {
            costa++;
            continue;
        }

        if(x < n-1)
        {
            x++;
            if(terra.find(make_pair(y, x)) == terra.end())
            {
                costa++;
                continue;
            }
            x--;
        }
        else
        {
            costa++;
            continue;
        }

        if(y > 0)
        {
            y--;
            if(terra.find(make_pair(y, x)) == terra.end())
            {
                costa++;
                continue;
            }
            y++;
        }
        else
        {
            costa++;
            continue;
        }

        if(y < m-1)
        {
            y++;
            if(terra.find(make_pair(y, x)) == terra.end())
            {
                costa++;
                continue;
            }
            y--;
        }
        else
        {
            costa++;
            continue;
        }

    }

    cout << costa;



    return 0;
}