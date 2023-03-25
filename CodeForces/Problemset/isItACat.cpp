#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, j, resp;
    string m;
    string m2="meow";
    j = 0;

    cin >> t;

    while(t > 0)
    {
        resp = 1;
        j = 0;
        cin >> n;
        cin.ignore();
        cin >> m;

        for(int i=0; i<n; i++)
        {
            if(m[i] == m2[j] or m[i] == m2[j] - 32)
            {
                continue;
            }
            else
            {
                if((i != 0) and (m2[j] != 'w') and (m[i] == m2[j+1] or m[i] == m2[j+1] - 32))
                {
                    j++;
                }
                else
                {
                    resp = 0;
                    break;
                }
            }
        }

        if(resp == 1)
        {
            if(j != 3)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            } 
        }
        else
        {
            cout << "NO" << endl;
        }

        t--;
    }


    return 0;
}

/*
    string a;
    int b;

    cin >> b;
    cin.ignore(); //Limpar o buffer do teclado em c++
    getline(cin, a); //Ler string com espaço
    cout << a;
*/