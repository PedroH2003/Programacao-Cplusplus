/*Calculando
A disseminação de computadores se deve principalmente à capacidade de eles se comportarem como outras máquinas, vindo a substituir muitas dessas. Esta flexibilidade é possível porque podemos alterar a funcionalidade de um computador, de modo que ele opere a forma de desejar: essa é a base da chamada de programação.

Sua tarefa é escrever um programa que faça com que o computador opere como uma calculadora simples. O seu programa deve ler expressões aritméticas e produzir como saída ou valor dessas expressões, como uma calculadora poderia. O programa deve implementar apenas um subconjunto reduzido das operações disponíveis em uma calculadora: somas e subtrações.

Entrada
A entrada é composta de vários conjuntos de testes. A primeira linha de conjunto de testes contém um número inteiro m
 (1≤m≤100
), incluindo o número de operações da expressão a ser avaliada. A segunda linha de um conjunto de testes contém uma expressão aritmética a ser avaliada, no seguinte formato:

X1s1X2s2...Xm−1sm−1Xmsm
onde

• Xi
, 1≤i≤m
, está operando (0≤Xi≤100
).

• sj
, 1≤j≤m
 , é um operador, representado Pelos simbolos '+' ou '-';

• não há espaços em branco entre operandos e operadores. O final da entrada é indicado pelo valor m=0
.

Saída
Para cada conjunto de testes da entrada, seu programa deve produzir três linhas. A primeira linha deve conter um identificador de expressão, no formato “Teste n
”, onde é numerado a partir de 1. Na segunda linha, deve aparecer o resultado encontrado pelo seu programa. A terceira linha deve ser deixada em branco. A grafia mostrada no Exemplo de Saída, abaixo, deve ser seguida rigorosamente.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i=0, cont=0, num, op=1;
    string operacao, a="";

    while(cin >> n)
    {
        if(n == 0)
        {
            break;
        }

        cont = 0;
        op = 1;

        cin >> operacao;

        for(int j=0; j<operacao.size(); j++)
        {
            if(operacao[j] != '+' and operacao[j] != '-')
            {
                while(operacao[j] != '+' and operacao[j] != '-' and j != operacao.size())
                {
                    a += operacao[j];
                    j++;
                }
                j--;
                num = stoi(a);
                a = "";

                cont += (num * op);
            }
            else
            {
                if(operacao[j] == '+')
                {
                    op = 1;
                }
                else
                {
                    op = -1;
                }
            }
        }

        i++;

        cout << "Teste " << i << "\n";
        cout << cont << "\n\n";

    }


    return 0;
}