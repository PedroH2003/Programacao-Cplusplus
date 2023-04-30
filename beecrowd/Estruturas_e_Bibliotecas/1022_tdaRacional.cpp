/*TDA Racional
Por Neilor Tonin, URI  Brasil

Timelimit: 1
A tarefa aqui neste problema é ler uma expressão matemática na forma de dois números Racionais (numerador / denominador) e apresentar o resultado da operação. Cada operando ou operador é separado por um espaço em branco. A sequência de cada linha que contém a expressão a ser lida é: número, caractere, número, caractere, número, caractere, número. A resposta deverá ser apresentada e posteriormente simplificada. Deverá então ser apresentado o sinal de igualdade e em seguida a resposta simplificada. No caso de não ser possível uma simplificação, deve ser apresentada a mesma resposta após o sinal de igualdade.

Considerando N1 e D1 como numerador e denominador da primeira fração, segue a orientação de como deverá ser realizada cada uma das operações:
Soma: (N1*D2 + N2*D1) / (D1*D2)
Subtração: (N1*D2 - N2*D1) / (D1*D2)
Multiplicação: (N1*N2) / (D1*D2)
Divisão: (N1/D1) / (N2/D2), ou seja (N1*D2)/(N2*D1)
Entrada
A entrada contem vários casos de teste. A primeira linha de cada caso de teste contem um inteiro N (1 ≤ N ≤ 1*104), indicando a quantidade de casos de teste que devem ser lidos logo a seguir. Cada caso de teste contém um valor racional X (1 ≤ X ≤ 1000), uma operação (-, +, * ou /) e outro valor racional Y (1 ≤ Y ≤ 1000).
Saída
A saída consiste em um valor racional, seguido de um sinal de igualdade e outro valor racional, que é a simplificação do primeiro valor. No caso do primeiro valor não poder ser simplificado, o mesmo deve ser repetido após o sinal de igualdade.*/

#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b)
{
    if(b == 0)
    {
        return a;
    }

    return mdc(b, a % b);
}

int main(){

    int n, num1, deno1, num2, deno2, num3, deno3, auxMdc;
    string op1, op2;

    cin >> n;
    cin.ignore();

    while(n != 0)
    {

        cin >> num1 >> op1 >> deno1;
        cin.ignore();
        cin >> op2;
        cin >> num2 >> op1 >> deno2;


        if(op2 == "+")
        {
            num3 = (num1*deno2 + num2*deno1);
            deno3 = (deno1*deno2);
        }
        else if(op2 == "-")
        {
            num3 = (num1*deno2 - num2*deno1);
            deno3 = (deno1*deno2);            
        }
        else if(op2 == "*")
        {
            num3 = (num1*num2);
            deno3 = (deno1*deno2);
        }
        else if(op2 == "/") 
        {
           num3 =  (num1*deno2);
           deno3 = (num2*deno1);
        } 

        if(num3 < 0 and deno3 < 0)
        {
            num3 *= -1;
            deno3 *= -1;
        }
        auxMdc = mdc(num3, deno3);
        if(auxMdc < 0)
        {
            auxMdc *= -1;
        }


        cout << num3 << "/" << deno3 << " = " << num3 / auxMdc << "/" << deno3 / auxMdc << "\n";

        n--;
    }

    return 0;
}