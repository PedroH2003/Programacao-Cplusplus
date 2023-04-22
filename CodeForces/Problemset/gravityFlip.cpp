/*A. Gravidade Flip
limite de tempo por ensaio1 segundo
limite de memória por teste256 megabytes
entrada padrão deentrada
saídapadrão de saída
O pequeno Chris está entediado durante suas aulas de física (muito fácil), então ele construiu uma caixa de brinquedos para se manter ocupado. A caixa é especial, uma vez que tem a capacidade de mudar a gravidade.

Há n colunas de cubos de brinquedo na caixa dispostos em uma linha. A i-ésima coluna contém umeu Cubos. No início, a gravidade na caixa está puxando os cubos para baixo. Quando Chris muda a gravidade, ele começa a puxar todos os cubos para o lado direito da caixa. A figura mostra as configurações inicial e final dos cubos na caixa: os cubos que mudaram de posição são destacados com laranja.


Dada a configuração inicial dos cubos de brinquedo na caixa, encontre as quantidades de cubos em cada uma das n colunas após o interruptor de gravidade!

Entrada
A primeira linha de entrada contém um inteiro n (1 ≤ n ≤ 100), o número das colunas na caixa. A próxima linha contém n números inteiros separados por espaço. O i-ésimo número umeu (1 ≤ aeu ≤ 100) denota o número de cubos na i-ésima coluna.

Saída
Saída n números inteiros separados por espaços, onde o i-ésimo número é a quantidade de cubos na i-ésima coluna após o interruptor de gravidade.*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> a;
    int n;

    cin >> n;
    a.resize(n);

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for(int i=0; i<n; i++)
    {
        cout << (i>0 ? " " : "") << a[i];
        //cout << a[i] << (i!=n-1 ? " " : "");
    }

    return 0;
}