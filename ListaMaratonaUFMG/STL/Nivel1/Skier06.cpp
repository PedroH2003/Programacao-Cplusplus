#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main(){

    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        set<string> v;
        int ans = 0;

        pair<int,int> aux = {0, 0};
        for(int i=0; i<s.size(); i++){
            pair<int,int> ant = aux;

            if(s[i] == 'N') aux.second++;
            else if(s[i] == 'S') aux.second--;
            else if(s[i] == 'W') aux.first--;
            else aux.first++;

            string num = to_string(ant.first) + "-" + to_string(ant.second) + "-" + to_string(aux.first) + "-" + to_string(aux.second);
            string num2 = to_string(aux.first) + "-" + to_string(aux.second) + "-" + to_string(ant.first) + "-" + to_string(ant.second);

            if(v.find(num) != v.end()){
                ans++;
            }
            else{
                ans += 5;
                v.insert(num);
                v.insert(num2);
            }
        }
        cout << ans << endl;
    }



    return 0;
}