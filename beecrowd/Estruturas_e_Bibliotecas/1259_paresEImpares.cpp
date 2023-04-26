/*Pares e Ímpares
Por Neilor Tonin, URI  Brasil

Timelimit: 1
Considerando a entrada de valores inteiros não negativos, ordene estes valores segundo o seguinte critério:

Primeiro os Pares
Depois os Ímpares
Sendo que deverão ser apresentados os pares em ordem crescente e depois os ímpares em ordem decrescente.

Entrada
A primeira linha de entrada contém um único inteiro positivo N (1 < N <= 105) Este é o número de linhas de entrada que vem logo a seguir. As próximas N linhas conterão, cada uma delas, um valor inteiro não negativo.

Saída
Apresente todos os valores lidos na entrada segundo a ordem apresentada acima. Cada número deve ser impresso em uma linha, conforme exemplo abaixo.*/

#include <bits/stdc++.h>

using namespace std;

bool is_even(int number)
{
    return number % 2 == 0;
}

bool compare(int a, int b)
{
    if(is_even(a) and is_even(b)) //se for par 
    {
        return a < b; // coloque em ordem crescente
    }

    if(!is_even(a) and !is_even(b)) // se for ímpar
    {
        return a > b; //coloque em ordem decrescente
    }

    return is_even(a); //pares antes dos ímpares
}


int main(){

    int n;
    vector<int> v;

    cin >> n;

    v.resize(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), compare);

    for(int i:v)
    {
        cout << i << "\n";
    }



    return 0;
}