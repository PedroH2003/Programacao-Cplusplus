#include <bits/stdc++.h>

using namespace std;

int main(){

    string s; cin >> s;
    stack<char> v;

    int ans = 1;
    for(int i=0; i<s.size(); i++){
        if(!v.empty() and v.top() == s[i]){
            v.pop(); ans = -ans;
        }else{
            v.push(s[i]);
        }
    }

    if(ans == -1) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}