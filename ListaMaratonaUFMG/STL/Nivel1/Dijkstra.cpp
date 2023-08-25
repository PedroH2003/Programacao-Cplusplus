// https://www.beecrowd.com.br/judge/pt/problems/view/2653?origem=1

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main() { _

    set<string> joia_dif;
    string joia;
    int resp;

    while(cin>>joia)
    {
        joia_dif.insert(joia);
    }

    resp = joia_dif.size();
    cout << resp << endl;
    
    return 0;
}