/*Flores de fogo
Atualmente, uma flor de fogo não é algo considerado estranho para muitos jovens. Isso ocorre porque um videogame famoso popularizou esse tipo de flor. Neste jogo, o protagonista ganhou superpoderes ao tocar uma flor de fogo, atirando pequenas bolas de fogo para derrotar seus inimigos.

No entanto, já foi dito sobre flores de fogo há muito tempo. Na mitologia polonesa, flores de fogo são flores de grande poder místico guardadas por espíritos malignos. Ela tinha esse nome porque era tão brilhante que era impossível olhá-la diretamente. Quem conseguiu tal flor possuía a capacidade de ler a mente das outras pessoas, encontrando tesouros escondidos e repelindo todo o mal.

Para obter uma flor de fogo, uma pessoa deve procurá-la em uma floresta antes da meia-noite, na véspera de Kupaly Noc. Exatamente à meia-noite, ela floresceu. Para colher, seria necessário desenhar um círculo em volta dela. Parece uma tarefa fácil, no entanto, os espíritos malignos que guardam a flor de todos tentam distrair qualquer um que tente pegá-la. Se a pessoa falhasse ao tentar desenhar um círculo em volta da flor, sua vida seria sacrificada.

Dado dois círculos, um projetado por um ambicioso caçador de flores de fogo e outro representando a área da flor, sua tarefa é determinar se o caçador morre ou fica rico com sua conquista.

Entrada
A entrada contém muitas instâncias e termina com o fim do arquivo ( EOF ). Cada instância consiste em uma linha com seis números inteiros: R1(1≤R1)
, X1
, Y1
, R2(R2≤1000)
, X2
, Y2(Y2≤1000)
.

O círculo desenhado pelo caçador tem raio R1
 e centro (X1
 ; Y1
). O círculo que representa a área de flor ter de raio R2
 centro e (X2
 , Y2
).

Resultado
Para cada caso de teste, teremos uma linha de saída, contendo "MORTO" (morto) ou "RICO" (rico) se a caça puder colher a flor.*/

#include <bits/stdc++.h>

using namespace std;


int main()
{
    int r1, x1, y1, r2, x2, y2;

    while (std::cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2)
    {
        double distance = hypot(x2 - x1, y2 - y1); //hypot() é uma função da biblioteca <cmath> pra calcular a distância entre dois pontos (x1, y1) e (x2, y2);

        if (r2 > r1 || r1 < distance + r2)
        {
            cout << "MORTO\n";
        }
        else
        {
            cout << "RICO\n";
        }
    }

    /*
    int r1, x1, y1, r2, x2, y2, x3, y3, cont;
    double r3;
    string resp = "RICO";

    while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2)
    {
        if(r2 > r1)
        {
            cout << "MORTO" << "\n";

        }
        else
        {
            x3 = x2 - x1;
            if(x3 < 0)
            {
                x3 *= -1;
            }
            y3 = y2 - y1;
            if(y3 < 0)
            {
                y3 *= -1;
            }

            r3 = sqrt((x3*x3) + (y3*y3));
            cont = r1;

            if(cont <= r3)
            {
                cout << "MORTO" << "\n";
            }
            else
            {
                cont -= r3;
                if(cont < r2)
                {
                    resp = "MORTO";
                }
                cout << resp << "\n";
                resp = "RICO";
            }
        }
    }
    */

    return 0;
}