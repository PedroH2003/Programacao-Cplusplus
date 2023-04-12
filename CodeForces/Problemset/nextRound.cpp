#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k, cont;
    vector<int> pont;
    cont = 0;

    cin >> n >> k;

    pont.resize(n);

    for(int i=0; i<n; i++)
    {
        cin >> pont[i];
    }
    for(int i=0; i<n; i++)
    {
        if(pont[i] >= pont[k-1] and pont[i] > 0)
        {
            cont++;
        }
        else
        {
            break;
        }
    }

    cout << cont;

    cout << cont;



    return 0;
}