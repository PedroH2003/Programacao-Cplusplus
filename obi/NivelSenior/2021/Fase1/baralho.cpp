#include <bits/stdc++.h>

using namespace std;

struct naips
{
    set<string> baralho;
    int teste;
    int cont;
};

int main()
{
    string b, temp = "";
    vector<naips> n;
    n.resize(4);
    n[0].teste = n[1].teste = n[2].teste = n[3].teste = 0;
    n[0].cont = n[1].cont = n[2].cont = n[3].cont = 13;

    cin >> b;

    for(int i=b.size()-1; i>=0; i -= 3)
    {
        if(b[i-2] != '0')
        {
            if(b[i-1] == '0')
            {
                temp = "z";
            }
            else if(b[i-1] == '1')
            {
                temp = "v";
            }
            else if(b[i-1] == '2')
            {
                temp = "d";
            }
            else
            {
                temp = "r";
            }
        }
        else
        {
            temp = b[i-1];
        }            

        if(b[i] == 'C' and n[0].teste == 0)
        {
            if(n[0].baralho.find(temp) == n[0].baralho.end())
            {
                n[0].baralho.insert(temp);
                n[0].cont--;
            }
            else
            {
                n[0].teste = 1;
            }
        }
        else if(b[i] == 'E' and n[1].teste == 0)
        {
            if(n[1].baralho.find(temp) == n[1].baralho.end())
            {
                n[1].baralho.insert(temp);
                n[1].cont--;
            }
            else
            {
                n[1].teste = 1;
            }
        }
        else if(b[i] == 'U' and n[2].teste == 0)
        {
            if(n[2].baralho.find(temp) == n[2].baralho.end())
            {
                n[2].baralho.insert(temp);
                n[2].cont--;
            }
            else
            {
                n[2].teste = 1;
            }
        }
        else if(b[i] == 'P' and n[3].teste == 0)
        {
            if(n[3].baralho.find(temp) == n[3].baralho.end())
            {
                n[3].baralho.insert(temp);
                n[3].cont--;
            }
           else
            {
                n[3].teste = 1;
            }
        }
        temp = "";
        
    }

    for(int i=0; i<4; i++)
    {
        if(n[i].teste != 0)
        {
            cout << "erro\n";
        }
        else
        {
            cout << n[i].cont << "\n";
        }
    }

    return 0;
}