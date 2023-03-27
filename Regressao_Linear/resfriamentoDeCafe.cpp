/*Regressão linear pra prever a temperatura de um café em função do tempo.
Utilizando Resfriamento de Newton
formula: T(t) = Tm + (A * e^k*t)
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int intervalo_temp, num_dados, i, temp;
    double temperatura_amb, aux_T, A, aux_k, k, T, euler, aux_kt;
    vector<double> temperatura_cafe;
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

    cout << "Digite o numero de dados de temperatura ja conhecidos: ";
    cin >> num_dados;
    system("cls");

    cout << "Intervalo de tempo = " << intervalo_temp << " min" << "\n";
    cout << "Temperatura ambiente (Tm) = " << temperatura_amb << " C" << "\n";

    cout << "Digite a temperatura do cafe no tempo 0: ";
    cin >> aux_T;
    temperatura_cafe.push_back(aux_T);

    A = temperatura_cafe[0] - temperatura_amb;

    for(i=1; i<num_dados; i++)
    {
        cout << "Digite a temperatura do cafe depos de " << (i*5) << " min: ";
        cin >> aux_T;
        temperatura_cafe.push_back(aux_T);

        aux_k = ((temperatura_cafe[i] - temperatura_cafe[i-1]) / (intervalo_temp)) / (temperatura_cafe[i] - temperatura_amb);
        k += aux_k;
    }
    k = k / num_dados;

    cout << "\n\nA regressao linear esta feita" << endl;
    cout << k << endl;
    while(temp != -1)
    {
        cout << "Digite um tempo qualquer ou -1 para sair: ";
        cin >> temp;
        
        aux_kt = k * temp;
        T = temperatura_amb + (A * (pow(euler, aux_kt)));

        cout << "\nA temperatura do cafe depois de " << temp << " min e de " << T << " graus Celsius\n";
        
    }
    return 0;
}


