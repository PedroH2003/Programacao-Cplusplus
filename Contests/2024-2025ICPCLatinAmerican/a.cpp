#include <bits/stdc++.h>

using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define REP(i, a, b) for(int i=a;i<b;i++)
typedef long long ll;
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fll;
const int mod = 1e9+7;
const int MAX = 1e3+10;

int main(){ _

    string s; cin >> s;

    int pos=s.size()-2;
    for(int i=s.size()-2; i>=0; i--){
        if(s[i] >= s[i+1]){
            break;
        }
        pos--;
    }
    cout << pos+1 << endl;


    return 0;
}