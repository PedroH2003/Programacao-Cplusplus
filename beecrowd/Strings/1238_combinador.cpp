/*Combinador

Timelimit: 1
Implemente um programa denominado combinador, que recebe duas strings e deve combiná-las, alternando as letras de cada string, começando com a primeira letra da primeira string, seguido pela primeira letra da segunda string, em seguida pela segunda letra da primeira string, e assim sucessivamente. As letras restantes da cadeia mais longa devem ser adicionadas ao fim da string resultante e retornada.

Entrada
A entrada contém vários casos de teste. A primeira linha contém um inteiro N que indica a quantidade de casos de teste que vem a seguir. Cada caso de teste é composto por uma linha que contém duas cadeias de caracteres, cada cadeia de caracteres contém entre 1 e 50 caracteres inclusive.

Saída
Combine as duas cadeias de caracteres da entrada como mostrado no exemplo abaixo e exiba a cadeia resultante.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, tam;
    string a, b, c;

    cin >> n;

    while(n != 0)
    {
        c="";
        cin >> a >> b;

        tam = min(a.size(), b.size());

        for(int i=0; i<tam; i++)
        {
            c += a[i];
            c += b[i];

        }

        if(a.size() > b.size())
        {
            for(int i=tam; i<a.size(); i++)
            {
                c += a[i];
            }
        }
        else if(a.size() < b.size())
        {
            for(int i=tam; i<b.size(); i++)
            {
                c += b[i];
            }
        }

        cout << c << "\n";
        n--;
    }


    return 0;
}