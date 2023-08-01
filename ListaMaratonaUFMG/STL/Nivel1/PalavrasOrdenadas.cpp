/*Palavras como “belo”, “fino”, “cruz” e “flor” possuem a interessante propriedade de que suas letras aparecem todas em ordem alfabética. Por exemplo, em “flor”, f vem antes de l no alfabeto, l vem antes de o, e o vem antes de r. Dizemos que palavras com essa propriedade são ordenadas.

Dada uma palavra, determine se ela é ordenada.

Entrada
A entrada começa com uma linha contendo apenas um inteiro P, que representa o número de palavras que serão dadas na entrada. Em seguida, há P linhas, cada uma contendo uma palavra.

Cada palavra é composta apenas por letras minúsculas ou maiúsculas, sem acentos ou pontuação. Você pode supor que não há palavras com mais de 42 caracteres.

Saída
Para cada palavra dada na entrada, imprima uma linha na saída no formato <palavra>: <r>, onde <palavra> é a palavra em si, e <r> é O (a letra O) se a palavra for ordenada e N caso contrário.*/

#include <bits/stdc++.h> 

using namespace std;

int main()
{
    int n; cin >> n;
    string p;
    char r='O', aux1, aux2;

    while(n--)
    {
        cin >> p;
        for(int i=0; i<p.size(); i++)
        {
            aux1 = p[i];

            if(p[i] >= 'A' and p[i] <= 'Z')
            {
                aux1 += 32;
            }

            if(i != p.size()-1)
            {
                aux2 = p[i+1];
                if(p[i+1] >= 'A' and p[i+1] <= 'Z')
                {
                    aux2 += 32;
                }
            }

            if(i != p.size()-1 and aux1 >= aux2)
            {
                r='N';
                break;
            }
        }
        cout << p << ": " << r << "\n";
        r = 'O';
    }

    return 0;
}