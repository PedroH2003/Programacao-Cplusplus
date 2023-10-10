// https://codeforces.com/contest/1324/problem/C

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