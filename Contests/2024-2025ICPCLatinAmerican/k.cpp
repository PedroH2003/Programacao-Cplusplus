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
    
    string s; 
    int k, ans = 0;
    cin >> k >> s;

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        int R = i;
        while (R < s.size() and s[R] == c) {
            R++;
        }
        
        queue<pair<int, int>> p;
        p.push({i, R});

        while (p.size()) {
            auto x = p.front(); p.pop();
            int l = x.first, r = x.second;
            int size = r-l+1;
            if (r < l or size < k) continue;
            int m = (l+r)/2;
            s[m] = (s[m] == '0') ? '1': '0';
            ans++;
            p.push({l, m-1});
            p.push({m+1, r});
        }
        i = R-1;
    }

    cout << ans << " " << s << endl;
    return 0;
}