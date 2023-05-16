/*Alturas
Em um parque, N
 pessoas querem se divertir no mais novo brinquedo aquático inaugurado. Cada pessoa entrará no brinquedo em um bote, tal que cada bote pode conter no máximo duas pessoas. Para cada bote, há uma restrição quanto à altura dos participantes: A soma das alturas das pessoas em cada bote deve ser menor ou igual a x
. Cada pessoa irá entrar em exatamente um bote, e um bote pode conter uma ou duas pessoas.

Com isso, as pessoas do parque pediram que você responda a seguinte pergunta: Qual a menor quantidade necessária de botes para que todos se divirtam?

Entrada:
A primeira linha da entrada consiste de dois inteiros, N
 e x
.
A segunda linha da entrada contém N
 inteiros hi
 (1≤i≤N
), indicando as alturas de cada pessoa.

Saída
Imprima um único inteiro: A menor quantidade necessária de botes.

Restrições:
1≤N≤105
1≤x≤109
1≤hi≤x*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x, sum=0, auxh, auxn, cont=0, i=0, numb=0;
    vector<int> h;

    cin >> n >> x;
    auxn = n;

    while(auxn != 0)
    {
        cin >> auxh;
        sum += auxh;
        h.push_back(auxh);

        auxn--;
    }
    sort(h.begin(), h.end());


    while(sum != 0)
    {
        while(h[n-1] == -1)
        {
            n--;
        }

        cont += h[n-1];
        sum -=  h[n-1];
        h[n-1] = -1;


        while(h[i] == -1 and i != n-1)
        {
            i++;
        }
        if(i != n-1)
        {
            cont += h[i];
            if(cont > x)
            {
                cont -= h[i];
            }
            else
            {
                sum -= h[i];
                h[i] = -1;
            } 
        }  

        numb++;
        cont = 0;
    }

    cout << numb;



    return 0;
}