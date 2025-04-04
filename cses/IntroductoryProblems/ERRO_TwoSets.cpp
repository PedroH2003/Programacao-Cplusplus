#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Calculando a soma dos números de 1 a n
    long long total = (n * (n + 1)) / 2;

    // Se a soma total for ímpar, não podemos dividir em dois conjuntos iguais
    if (total % 2 != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;

        long long half = total / 2;
        long long sum = 0;
        vector<int> ans1, ans2;

        // Vamos adicionar os maiores números possíveis no primeiro conjunto até atingir metade da soma
        for (int i = n; i >= 1; i--) {
            if (sum + i <= half) {
                sum += i;
                ans1.push_back(i);  // Adiciona ao primeiro conjunto
            } else {
                ans2.push_back(i);  // Adiciona ao segundo conjunto
            }
        }

        // Exibindo os resultados
        cout << ans1.size() << endl;
        for (auto u : ans1) cout << u << " ";
        cout << endl;
        
        cout << ans2.size() << endl;
        for (auto u : ans2) cout << u << " ";
        cout << endl;
    }

    return 0;
}
