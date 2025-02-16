#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        int x,y; cin >> x >> y;
        int maior = max(x, y); x--, y--;
        int g[maior][maior], ans=-1;
        g[0][0] = 1;

        int linha=0,coluna=0,aux=1,nova_linha=2,nova_coluna=2,cont=2,cont2=0;
        if(x == 0 and y == 0) ans = 1;
        while(cont2 < maior and ans == -1){
            if(aux){
                coluna++;
                for(int i=linha; i<nova_linha and ans == -1; i++){
                    g[i][coluna] = cont;
                    if(i == x and coluna == y) ans = cont;
                    cont++;
                    linha++;
                }
                linha--;
                coluna--;
                for(int i=coluna; i >= 0 and ans == -1; i--){
                    g[linha][i] = cont;
                    if(linha == x and coluna == y) ans = cont;
                    cont++;
                    coluna--;
                }
                coluna++;
                aux = 0;
            }
            else{
                linha++;
                for(int i=coluna; i<nova_coluna and ans == -1; i++){
                    g[linha][i] = cont;
                    if(linha == x and coluna == y) ans = cont;
                    cont++;
                    coluna++;
                }
                linha--;
                coluna--;
                for(int i=linha; i >= 0 and ans == -1; i--){
                    g[i][coluna] = cont;
                    if(linha == x and coluna == y) ans = cont;
                    cont++;
                    linha--;
                }
                linha++;
                aux = 1;
            }
            cont2++;
            nova_linha++; nova_coluna++;

        }
        cout << ans << endl;
    }

    return 0;
}