#include <bits/stdc++.h>

using namespace std;

int main()
{
    double taxa_variacao, valor_x, valor_y, somatorio_x, somatorio_x_quadrado, somatorio_z, somatorio_xz, b, euler;
    int num_dados, cont, continuar;
    cont = somatorio_x = somatorio_x_quadrado = somatorio_z = somatorio_xz = 0;
    continuar = 1;
    euler = 2.71828182845904523536;

    cout << "Digite o numero de dados que voce ja possui: ";
    cin >> num_dados;

    system("cls");

    while(cont < num_dados)
    {
        cout << cont+1 << ": x = ";
        cin >> valor_x;
        cout << cont+1 << ": y = ";
        cin >> valor_y;

        cout << "\n";

        somatorio_x += valor_x;
        somatorio_x_quadrado = somatorio_x_quadrado + pow(valor_x, 2);
        somatorio_z = somatorio_z + log(valor_y);
        somatorio_xz = somatorio_xz + (valor_x * log(valor_y));

        cont++;
    }

    taxa_variacao = ((somatorio_x * somatorio_z) - (num_dados*somatorio_xz)) / ((pow(somatorio_x, 2)) - (num_dados*somatorio_x_quadrado));

    b = (somatorio_z - (taxa_variacao*somatorio_x)) / num_dados;


    cout << "\n\nO AJUSTE EXPONENCIAL ESTA COMPLETO";

    while(continuar == 1)
    {
        cout << "\n\nDeseja continuar?\nDigite 1 se sim ou 0 se nao:";
        cin >> continuar;

        if(continuar != 1)
        {
            break;
        }

        cout << "\nDigite um valor de x para obter um resultado y:";
        cin >> valor_x;

        valor_y = (pow(euler, b)) * (pow(euler, taxa_variacao*valor_x));
        cout << "y = " << valor_y << "\n\n";
    }

    return 0;
}