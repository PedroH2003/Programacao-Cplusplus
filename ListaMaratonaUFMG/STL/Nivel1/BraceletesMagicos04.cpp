#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string proibida, bracelete;
        cin >> proibida >> bracelete;
        bracelete += bracelete;
        string proibida2 = proibida; 
        reverse(proibida2.begin(), proibida2.end());

        if (bracelete.find(proibida) != string::npos) {
            cout << "S" << endl;
        } else if(bracelete.find(proibida2) != string::npos){
            cout << "S" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }

    return 0;
}
