/*Utilizando Resfriamento de Newton para analisar o resfriamento em função do tempo
formula: T(t) = Tm + (A * e^k*t)
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int intervalo_temp, num_dados, i, temp;
    double temperatura_amb, aux_T, A, aux_k, k, T, euler, aux_kt;
    vector<double> temperatura_material;
    temp = 0;
    euler = 2.71828182845904523536;

    cout << "Digite o intervalo de tempo (em min): ";
    cin >> intervalo_temp;
    system("cls");
    cout << "Intervalo de tempo = " << intervalo_temp << " min" << "\n\n";

    cout << "Digite a temperatura ambiente (em graus celsius): ";
    cin >> temperatura_amb;
    system("cls");
    cout << "Intervalo de tempo = " << intervalo_temp << " min" << "\n";
    cout << "Temperatura ambiente (Tm) = " << temperatura_amb << " C" << "\n";

    cout << "Digite o numero de dados de temperatura do material ja conhecidos: ";
    cin >> num_dados;
    system("cls");

    cout << "Intervalo de tempo = " << intervalo_temp << " min" << "\n";
    cout << "Temperatura ambiente (Tm) = " << temperatura_amb << " C" << "\n";

    cout << "Digite a temperatura do material no tempo 0: ";
    cin >> aux_T;
    temperatura_material.push_back(aux_T);

    A = temperatura_material[0] - temperatura_amb;

    for(i=1; i<num_dados; i++)
    {
        cout << "Digite a temperatura do material depos de " << (i*5) << " min: ";
        cin >> aux_T;
        temperatura_material.push_back(aux_T);

        aux_k = ((temperatura_material[i] - temperatura_material[i-1]) / (intervalo_temp)) / (temperatura_material[i] - temperatura_amb);
        k += aux_k;
    }
    k = (k / num_dados);

    cout << "\n\nA modelagem da funcao de Resfriamento de Newton esta pronta" << endl;
    while(temp != -1)
    {
        cout << "\n==============================================\nDigite um tempo qualquer ou -1 para sair: ";
        cin >> temp;
        
        aux_kt = k * temp;
        T = temperatura_amb + (A * (pow(euler, aux_kt)));

        cout << "A temperatura do material depois de " << temp << " min e de " << T << " graus Celsius\n";
        
    }
    return 0;
}


