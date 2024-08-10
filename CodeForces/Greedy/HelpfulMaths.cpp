#include <bits/stdc++.h>

using namespace std;

int main(){

    string s, ans=""; cin >> s;
    vector<int> num;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '1'){
            num.push_back(1);
        }
        else if(s[i] == '2'){
            num.push_back(2);
        }
        else if(s[i] == '3'){
            num.push_back(3);
        }
    }
    sort(num.begin(), num.end());
    for(int i=0; i<num.size(); i++){
        ans += to_string(num[i]);
        if(i != num.size()-1){
            ans += '+';
        }
    }
    cout << ans << endl;

    return 0;
}