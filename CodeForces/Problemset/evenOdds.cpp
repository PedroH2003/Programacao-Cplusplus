//NÃO FOI FINALIZADO

#include <bits/stdc++.h>

using namespace std;

/*
bool is_even(long long n) {
    return n % 2 != 0;
}
*/

int main() {
    long long n, k, count = 0, aux=0;
  //  vector<long long> v;
    cin >> n >> k;


    // Percorre os números ímpares
    for (long long i = 1; i <= n; i += 2) {
        count++;
        if (count == k) {
            cout << i;
            aux = 1;
            break;
        }
    }

    if(aux == 0)
    {
        // Percorre os números pares
        for (long long i = 2; i <= n; i += 2) {
            count++;
            if (count == k) {
                cout << i;
                break;
            }
        }
    }


/*

    MELHOR NAO UTILIZAR VECTOR PORQUE ELE NÃO TERA CAPACIDADE PARA ARMAZENAR NUMEROS MUITOS GRANDES, COMO É
    O CASO DESSA QUESTÃO QUE PODE TER : 1 <= n <= 10^9
    v.resize(n);

    for(long long i=0; i<n; i++)
    {
        v[i] = i+1;
    }

    auto pivot = partition(v.begin(), v.end(), is_even); /*primeiro definimos o range que queremos pegar 
    do vetor, no caso peguei o inicio do vector e o fim do vector, depois definimos a condição de repartição, 
    ou seja, de que maneira o nosso vector será dividido, nesse caso eu utilizei a função "is_even" que separa 
    o vector em pares e impares (retornando true pros impares e false para os pares, assim o nosso vector fica 
    com os impares antes dos pares), e além de toda essa operação a função partition tambem retorna um ponteiro 
    que aponta para a primeira posição que se inicia a repartição, nesse caso para o primeiro numero par do 
    vector. 
    OBS: utilizamos auto quando o tipo de dado que será usado é incerto, como estamos trabalhando com um 
    ponteiro vale a pena utilizar ele. 

    sort(v.begin(), pivot);
    sort(pivot, v.end());

    cout << v[k-1];
*/

    return 0;
}
