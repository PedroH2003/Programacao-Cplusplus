/*Para o resto do planeta, mágica não existe. Para os habitantes da Sildávia, porém, não só existe como é algo comum: todo sildaviano com 14 anos ou mais de idade tem poderes mágicos. Por que 14 anos? Porque é nessa idade que se recebe do governo o bracelete mágico que lhes confere esses poderes, oras!

Cada pessoa na Sildávia possui um bracelete composto de vários cristais mágicos coloridos. Esse bracelete lhes confere poderes de acordo com a sequência de cristais presente. Por exemplo, uma sequência de cristais verde, vermelho, vermelho, roxo, turquesa, anil, anil dá o poder de levitação (que é um poder bem comum). Os braceletes são gerados de forma aleatória. Assim, cada habitante possui uma combinação de poderes diferente.

Recentemente, descobriu-se que há algumas sequências que dão ao usuário o poder de ler mentes. Isso causou uma revolta popular, pois muitos acreditam que esse poder fere com o direito à privacidade que é garantido pela constituição do país. Para acalmar a população, o governo decidiu fazer uma revisão geral dos braceletes da população, trocando os braceletes de todos aqueles que podem ler mentes e não mais produzindo novos braceletes com essa característica.

O problema é que os braceletes podem ter milhares de cristais, e verificar manualmente se o bracelete possui alguma das sequências proibidas é um processo custoso e muito sujeito a erros humanos. Sua tarefa é construir um programa que, dado uma sequência proibida e uma descrição do bracelete, determina se aquela sequência está presente no bracelete.

Entrada
A primeira linha contém um inteiro T, que representa o número de casos de teste. Cada uma das T linhas seguintes representa um caso de teste e possui duas strings separadas por espaço. A primeira dessas strings representa a sequência proibida e a segunda representa o bracelete. Ambas as strings são compostas de letras minúsculas (a--z) --- cada letra representa uma cor distinta. O bracelete é circular: o cristal representado pela última letra da string é adjacente àquele representado pela primeira. A sequência proibida possui entre 1 e 102 caracteres, inclusive. O bracelete possui entre 1 e 104 caracteres, inclusive.

Saída
Para cada caso de teste, imprima uma linha contendo S se a sequência proibida está presente naquele bracelete e N se ela não está presente.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, j, cont1=0, cont2=0, aux1=0, aux2=0; cin >> t;
    string seq, bracelete, resp="N";

    while(t--)
    {
        cin >> seq >> bracelete;

        i = 0;
        j = seq.size()-1;

        for(int w=0; w<bracelete.size(); w++)
        {
            if(bracelete[w] == seq[i])
            {
                cont1++;
                i++;
            }
            else
            {
            
                if(aux1 == 1 and aux2 != 1)
                {
                    break;
                }
                else if(aux2 == 1)
                {
                    aux1 = 0;
                }
                

                i = 0;
                cont1 = 0;
            }


            if(bracelete[w] == seq[j])
            {
                j--;
                cont2++;
            }
            else
            {
                if(aux2 == 1 and aux1 != 1)
                {
                    break;
                }
                else if(aux1 == 1)
                {
                    aux2 = 0;
                }

                j = seq.size()-1;
                cont2 = 0;
            }

            if(cont1 == seq.size() or cont2 == seq.size())
            {
                resp = "S";
                break;
            }

            if(w == bracelete.size()-1)
            {
                if(i != 0)
                {
                    if(bracelete[0] == seq[i])
                    {
                        w = -1;
                        aux1=1;
                    }
                }

                if(j != seq.size()-1)
                {
                    if(bracelete[0] == seq[j])
                    {
                        w = -1;
                        aux2=1;
                    }
                }
            }
        }

        cout << resp << "\n";
        resp = "N";
        aux1 = aux2 = cont1 = cont2 = 0;
    }




    return 0;
}