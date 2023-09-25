#include <iostream>

using namespace std;

int main(){

    int n, ans=0; cin >> n;
    string gabarito, candidato; cin >> gabarito >> candidato;

    for(int i=0; i<n; i++) if(gabarito[i] == candidato[i]) ans++;

    cout << ans << endl;

    return 0;
}