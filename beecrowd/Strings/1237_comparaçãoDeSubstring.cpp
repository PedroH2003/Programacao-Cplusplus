#include <bits/stdc++.h>

using namespace std;

int main()
{
    string frase1, frase2;
    int aux=0, tam1, tam2, auxj, auxi, cont=0;
    vector<int> resp;

    while(getline(cin, frase1) and getline(cin, frase2))
    {
        tam1 = frase1.length();
        tam2 = frase2.length();
        
        for(int i=0; i<tam1; i++)
        {
            for(int j=0; j<tam2; j++)
            {
                if(frase2[j] == frase1[i])
                {
                    if(i != 0 and j != 0)
                    {
                        if(frase2[j-1] != frase1[i-1])
                        {
                            aux = 0;
                        }
                        else
                        {
                            auxj = j;
                            auxi = i;
                            while(auxi != 0 and auxj !=0 and frase2[auxj-1] == frase1[auxi-1])
                            {
                                cont++;
                                auxj--;
                                auxi--;
                            }
                            
                            if(aux != cont)
                            {
                                aux = cont;
                            }
                            cont = 0;
                        }
                    }

                    aux++;
                    resp.push_back(aux);

                }
            }
   
        }
        resp.push_back(0);
        sort(resp.begin(), resp.end());

        cout << resp[resp.size()-1] << "\n";
        resp.clear();
    }

    

    return 0;
}


