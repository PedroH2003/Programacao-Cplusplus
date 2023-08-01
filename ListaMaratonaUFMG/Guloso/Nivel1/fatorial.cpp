/*O fatorial de um número inteiro positivo N, denotado por N!, é definido como o produto dos inteiros positivos menores do que ou iguais a N. Por exemplo 4! = 4 × 3 × 2 × 1 = 24.

Dado um inteiro positivo N, você deve escrever um programa para determinar o menor número k tal que N = a1! + a2! + ... + ak!, onde cada ai, para 1 ≤ i ≤ k, é um número inteiro positivo.

Por exemplo, para N = 10 a resposta é 3, pois é possível escrever N como a soma de três números fatoriais: 10 = 3! + 2! + 2!. Para N = 25 a resposta é 2, pois é possível escrever N como a soma de dois números fatoriais: 25 = 4! + 1!.

Entrada
A entrada consiste de uma única linha que contém um inteiro N (1 ≤ N ≤ 105).

Saída
Seu programa deve produzir uma única linha com um inteiro representando a menor quantidade de números fatoriais cuja soma é igual ao valor de N.*/

#include <bits/stdc++.h>

using namespace std;

int fat(int f)
{
    if(f <= 1)
    {
        return 1;
    }
    return f*fat(f-1);
}

int main()
{
    int n; cin >> n;
    vector<int> f (11);

    for(int i=0; i<11; i++) f[i] = fat(i);



    int ans = 0, cont=0;
    for(int i=10; i>0; i--)
    {
        int aux = n / f[i];
        ans += aux;
        n -= aux*f[i];

    }

    cout << ans << "\n";


    return 0;
}