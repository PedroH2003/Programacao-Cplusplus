/*Retângulos
São dadas as posições do canto inferior esquerdo (X1,Y1)
 e do canto superior direito (X2,Y2)
 de n
 retângulos, com os lados paralelos aos eixos do plano cartesiano. Ao menos um ponto no plano cartesiano pertence a n−1
 dos retângulos. Encontre qualquer um desses pontos.

Nota: Um ponto pertence a um retângulo se está dentro do retângulo, ou pertence às suas arestas.

Entrada:

A primeira linha de entrada contém um inteiro n
.

As próximas n
 linhas contém quatro inteiros:   X1
,   Y1
,   X2
,   Y2
,   que descrevem as coordenadas do i
 - ésimo retângulo.

Saída:

Seu programa deve imprimir dois inteiros:  X
 e Y
, as coordenadas de um ponto que pertença a n−1
 retângulos.
Se houver mais de um ponto que satisfaça as condições, imprima qualquer um.

Restrições:

1≤n≤132674
−109≤X1
  <
 X2≤109
−109≤Y1
 <
 Y2≤109*/

#include <bits/stdc++.h>

using namespace std;

//NÃO ESTÁ CORRETO

struct pontos
{
    pair<int, int> a; //canto inferior esquerdo do retângulo
    pair<int, int> b; //canto superior direito do retângulo
};
typedef struct pontos p;

int main(){

    int n, i, j, x1, y1, x2, y2, cont=1, x3, y3, cont2=0, cont3=0, cont4=0;
    vector<p> r; //retângulos
    p retangulo;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        retangulo.a = make_pair(x1, y1);
        retangulo.b = make_pair(x2, y2);
        
        r.push_back(retangulo);
    }
    i=0;
    j=1;

    //cout << r[i].b.first << "oi\n";

    while(cont != n-1)
    {
        if(j != i)
        {
            if(r[i].a.first <= r[j].b.first and r[i].a.second <= r[j].b.second)
            {
                //cout << "Oi\n";
                if(r[i].b.first >= r[j].a.first and r[i].b.second >= r[j].a.second)
                {
                    //cout << r[i].b.first << "oi\n";
                    if(r[i].b.first <= r[j].b.first and r[i].b.second <= r[j].b.second)
                    {
                        x3 = r[i].b.first;
                        y3 = r[i].b.second;
                        cont2++;
                        cont++;
                    }
                    else if(r[i].b.first >= r[j].b.first and r[i].b.second >= r[j].b.second)
                    {
                        if(r[i].a.first >=  r[j].a.first and r[i].a.second >= r[j].a.second)
                        {
                            x3 = r[i].a.first;
                            y3 = r[i].a.second;
                            cont3++;
                            cont++;
                        }
                        else
                        {
                            cont4++;
                        }
                            
                    }
                    else
                    {
                        cont4++;
                    }

                    if(cont2 == 2)
                    {
                        cont -= cont3;
                    }
                    else if(cont3 == 2)
                    {
                        cont -= cont2;
                    }
                }
                else
                {
                    cont4++;
                }
                
            }
            else
            {
                cont4++;
            }
        }
        j++;

        if(cont4 == 2)
        {
            j = n;
        }
        
        if(j == n and cont != n-1)
        {
            j = 0;
            i++;
            cont = 1;
            cont2 = cont3 = cont4 = 0;
        }
    }

    cout << x3 << " " << y3;

    return 0;
}