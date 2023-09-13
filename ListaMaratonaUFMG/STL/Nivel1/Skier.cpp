// https://codeforces.com/contest/1351/problem/C


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;

    while(t--)
    {
        map<pair<int, int>, int> pontos;
        vector<set<pair<int, int>>> caminho;
        string s; cin >> s; caminho.resize(s.size()+1);
        int x=0, y=0, pos, temp=0;

        pontos[make_pair(x, y)] = 0;

        for(int i=0; i<s.size(); i++)
        {
            int antx, anty; antx = x; anty = y;
            if(s[i] == 'N')
            {
                y++;
            }
            else if(s[i] == 'S')
            {
                y--;
            } 
            else if(s[i] == 'W')
            {
                x--;
            }
            else if(s[i] == 'E')
            {
                x++;
            }

            if(pontos.find(make_pair(x, y)) != pontos.end())
            {
                pos = pontos[make_pair(x, y)];
                if(caminho[pos].find(make_pair(antx, anty)) != caminho[pos].end())
                {
                    temp++;
                }
                else
                {
                    caminho[pos].insert(make_pair(antx, anty));
                    pos = pontos[make_pair(antx, anty)];
                    caminho[pos].insert(make_pair(x, y));
                    temp += 5;
                }
            }
            else
            {
                pontos[make_pair(x, y)] = i+1;
                caminho[i+1].insert(make_pair(antx, anty));
                pos = pontos[make_pair(antx, anty)];
                caminho[pos].insert(make_pair(x, y));
                temp += 5;
            }
        }

        cout << temp << "\n";
    }
    

    
    
    return 0;
}