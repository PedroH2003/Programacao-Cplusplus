/*Sentença Dançante
Por TopCoder*  EUA

Timelimit: 1
Uma sentença é chamada de dançante se sua primeira letra for maiúscula e cada letra subsequente for o oposto da letra anterior. Espaços devem ser ignorados ao determinar o case (minúsculo/maiúsculo) de uma letra. Por exemplo, "A b Cd" é uma sentença dançante porque a primeira letra ('A') é maiúscula, a próxima letra ('b') é minúscula, a próxima letra ('C') é maiúscula, e a próxima letra ('d') é minúscula.

Entrada
A entrada contém vários casos de teste. Cada caso de teste é composto por uma linha que contém uma sentença, que é uma string que contém entre 1 e 50 caracteres ('A'-'Z','a'-'z' ou espaço ' '), inclusive, ou no mínimo uma letra ('A'-'Z','a'-'z').

Saída
Transforme a sentença de entrada em uma sentença dançante (conforme o exemplo abaixo) trocando as letras para minúscula ou maiúscula onde for necessário. Todos os espaços da sentença original deverão ser preservados, ou seja, " sentence " deverá ser convertido para " SeNtEnCe ".

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    string sentenca;
    int aux=0;

    while(getline(cin, sentenca))
    {

        for(int i=0; i<sentenca.size(); i++)
        {
            if(aux == 0)
            {
                if(sentenca[i] >= 'a' and sentenca[i] <= 'z')
                {
                    sentenca[i] -= 32;
                    aux = 1;
                }
                else if(sentenca[i] != ' ')
                {
                    aux = 1;
                }

            }
            else
            {
                if(sentenca[i] >= 'A' and sentenca[i] <= 'Z')
                {
                    sentenca[i] += 32;
                    aux = 0;
                }
                else if(sentenca[i] != ' ')
                {
                    aux = 0;
                }
            }
        }
        aux = 0;

        cout << sentenca << "\n";

    }


    return 0;
}