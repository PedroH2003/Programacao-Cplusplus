#include <bits/stdc++.h>

using namespace std;

int MAX = 110;

vector<vector<int>> g(MAX);

int main()
{
    int v, e, teste=0;
    do
    {
        teste++;
        cin >> v >> e;

        if(v != 0 and e != 0)
        {
            vector<int> resp;
            for(int w=0; w<e; w++)
            {
                int i, j;
                cin >> i >> j; i--; j--;

                g[i].push_back(j);
                g[j].push_back(i);
            }
            
            int maior_grau = 0;
            for(int i=0; i<v; i++)
            {
                if(maior_grau < g[i].size())
                {
                    maior_grau = g[i].size();
                    resp.clear();
                    resp.push_back(i+1);
                }
                else if(maior_grau == g[i].size())
                {
                    resp.push_back(i+1);
                }
                g[i].clear();
            }

            cout << "Teste " << teste << "\n";
            for(int i=0; i<resp.size(); i++)
            {
                if(i != resp.size()-1)
                {
                    cout << resp[i] << " ";
                }
                else
                {
                    cout << resp[i] << "\n\n";
                }
            }
            resp.clear();
        }

    }while(v != 0 and e != 0);

    return 0;
}