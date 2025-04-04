#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<int> ans;

    if(n % 2 == 0 and n != 4){
        int aux1,aux2; aux1 = aux2 = n/2;

        int i=n;
        while(aux1--){
            ans.push_back(i);
            i -= 2;
        }
        i = n-1;
        while(aux2--){
            ans.push_back(i);
            i -= 2;
        }
    }
    else if(n != 4){
        int aux1,aux2; aux1 = aux2 = n/2;
        aux1++;

        int i=n;
        while(aux1--){
            ans.push_back(i);
            i -= 2;
        }
        i = n-1;
        while(aux2--){
            ans.push_back(i);
            i -= 2;
        }
    }
    else{
        ans = {2, 4, 1, 3};
    }

    if(n > 1 and n <= 3) cout << "NO SOLUTION";
    else for(auto u: ans) cout << u << " ";
    cout << endl;

    return 0;
}