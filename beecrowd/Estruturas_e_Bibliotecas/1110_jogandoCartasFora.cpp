/*Jogando Cartas Fora
Folclore, adaptado por Piotr Rudnicki  Canada

Timelimit: 1
Dada uma pilha de n cartas enumeradas de 1 até n com a carta 1 no topo e a carta n na base.  A seguinte operação é ralizada enquanto tiver 2 ou mais cartas na pilha.

Jogue fora a carta do topo e mova a próxima carta (a que ficou no topo) para a base da pilha.

Sua tarefa é encontrar a sequência de cartas descartadas e a última carta remanescente.

Cada linha de entrada (com exceção da última) contém um número n ≤ 50. A última linha contém 0 e não deve ser processada. Cada número de entrada produz duas linhas de saída. A primeira linha apresenta a sequência de cartas descartadas e a segunda linha apresenta a carta remanescente.

Entrada
A entrada consiste em um número indeterminado de linhas contendo cada uma um valor de 1 até 50. A última linha contém o valor 0.

Saída
Para cada caso de teste, imprima duas linhas. A primeira linha apresenta a sequência de cartas descartadas, cada uma delas separadas por uma vírgula e um espaço. A segunda linha apresenta o número da carta que restou. Nenhuma linha tem espaços extras no início ou no final. Veja exemplo para conferir o formato esperado*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> pilha;
    vector<int> descarte;
    int n, temp;

    while(cin >> n)
    {
        if(n == 0)
        { 
            break;
        }

        for(int i=1; i<=n; i++)
        {
            pilha.push(i);
        }

        while(pilha.size() > 1)
        {
            descarte.push_back(pilha.front());
            pilha.pop();
            temp = pilha.front();
            pilha.pop();
            pilha.push(temp);
        }

        cout << "Discarded cards: ";
        for(int i=0; i<descarte.size(); i++)
        {
            if(i != descarte.size()-1)
            {
                cout << descarte[i] << ", ";
            }
            else
            {
                cout << descarte[i] << "\n";
            }
            
        }

        cout << "Remaining card: " << pilha.front() << "\n";

        pilha.pop();
        descarte.clear();
    }

    return 0;
}