/*No jogo O Bruxo, Sigismund Dijkstra é o líder do Serviço Secreto Redaniano, por causa disso ele é uma das pessoas mais importantes do mundo.

Além disso Dijkstra possui um grande tesouro, o qual possui diversos tipos de jóias.

Dijkstra está muito curioso para saber quantos tipos de jóias diferentes seu tesouro possui.

Sabendo que você é o melhor programador do continente Dijkstra te contratou para verificar quantos tipos de jóias distintas ele tem em seu tesouro.

Entrada
A entrada consiste de várias linhas e cada uma contém uma string que descreve uma das jóias de Dijkstra. Essa string é composta apenas dos caracteres '(' e ')', a soma do tamanho de todas as string não excede 106.

Saída
Imprima quantos tipos de jóias distintas Dijkstra tem.*/

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main() { _

    set<string> joia_dif;
    string joia;
    int resp;

    while(cin>>joia)
    {
        joia_dif.insert(joia);
    }

    resp = joia_dif.size();
    cout << resp << endl;
    
    return 0;
}