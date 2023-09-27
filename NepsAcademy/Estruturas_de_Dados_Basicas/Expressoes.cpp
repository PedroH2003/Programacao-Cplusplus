#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        string a; cin >> a;
        char ans = 'S';
        stack<char> cadeia;

        for(int i=0; i<a.size(); i++){
            if(a[i] == '(' or a[i] == '[' or a[i] == '{'){
                cadeia.push(a[i]);
            }
            else
            {
                if(a[i] == ')' and !cadeia.empty() and cadeia.top() == '('){
                    cadeia.pop();
                }
                else if(a[i] == ']' and !cadeia.empty() and cadeia.top() == '['){
                    cadeia.pop();
                }
                else if(a[i] == '}' and !cadeia.empty() and cadeia.top() == '{'){
                    cadeia.pop();
                }
                else{
                    ans = 'N';
                    break;
                }
            }
            
            if(i == a.size()-1 and !cadeia.empty()){
                ans = 'N';
            }
        }

        cout << ans << endl;
    }

    return 0;
}