// 

#include <bits/stdc++.h>

using namespace std;

bool decrescente(int a, int b)
{
    return a > b;
}

int main()
{
    int k, resp=0; cin >> k;
    vector<int> v(12);

    for(int i=0; i<12; i++) cin >> v[i];

    sort(v.begin(), v.end(), decrescente);
    
    int i=0;
    while(k > 0)
    {
        if(i == 12)
        {
            resp = -1;
            break;
        }
        k -= v[i];
        resp++;
        i++;

    }

    cout << resp;


    return 0;
}