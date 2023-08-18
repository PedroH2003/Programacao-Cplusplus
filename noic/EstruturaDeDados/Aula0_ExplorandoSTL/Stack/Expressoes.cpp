// https://olimpiada.ic.unicamp.br/pratique/p2/2011/f2/expressoes/

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int t; cin >> t;

    while(t--){
        string s; cin >> s;
        stack<char> exp;
        char ans = 'S';

        for(int i=0; i<s.size(); i++){

            if(s[i] == '(' or s[i] == '[' or s[i] == '{'){
                exp.push(s[i]);
            }
            else{

                if(exp.empty()){
                    ans = 'N';
                    break;
                }

                if(s[i] == ')' and exp.top() == '('){
                    exp.pop();
                }
                else if(s[i] == ']' and exp.top() == '['){
                    exp.pop();
                }
                else if(s[i] == '}' and exp.top() == '{'){
                    exp.pop();
                }
                else{
                    ans = 'N';
                    break;
                }
            }
        }

        if(!exp.empty()){
            ans = 'N';
        }

        cout << ans << "\n";
    }

    return 0;
}