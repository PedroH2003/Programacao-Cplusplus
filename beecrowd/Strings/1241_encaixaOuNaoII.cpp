/*Encaixa ou Não II
Por Neilor Tonin, URI  Brasil

Timelimit: 1
Paulinho tem em suas mãos um novo problema. Agora a sua professora lhe pediu que construísse um programa para verificar, à partir de dois valores muito grandes A e B, se B corresponde aos últimos dígitos de A.

Entrada
A entrada consiste de vários casos de teste. A primeira linha de entrada contém um inteiro N que indica a quantidade de casos de teste. Cada caso de teste consiste de dois valores A e B maiores que zero, cada um deles podendo ter até 1000 dígitos.

Saída
Para cada caso de entrada imprima uma mensagem indicando se o segundo valor encaixa no primeiro valor, confome exemplo abaixo.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    string a, b, resp="encaixa";

    cin >> n;

    while(n != 0)
    {
        cin >> a >> b;
        i = a.size() - b.size();

        for(char c: b)
        {
            if(c != a[i])
            {
                resp = "nao encaixa";
                break;
            }
            i++;
        }
        cout << resp << "\n";

        resp = "encaixa";
        i=0;
        n--;
    }


    return 0;
}