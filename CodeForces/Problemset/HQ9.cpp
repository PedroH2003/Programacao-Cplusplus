#include <bits/stdc++.h>

using namespace std;

int main(){

    string a, resp="NO";

    cin >> a;

    for(char b : a)
    {
        if(b == 'H' or b == 'Q' or b == '9')
        {
            resp = "YES";
            break;
        }
    }

    cout << resp;

    return 0;
}