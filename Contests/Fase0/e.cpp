#include<bits/stdc++.h>
 
using namespace std;
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define REP(i, a, b) for(int i=a ; i<b; i++)
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const ll mod = 998244353ll;
const int MAX = 1e5+10;



long long gcd(long long a, long long b) {
    while (b != 0) {
        long long resto = a%b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    long long y, k;
    cin >> y >> k;
    vector<long long> fatores;
    long long x = 1, passo = 1;
    
    for (int p = 2; p*p <= y; p++) {
        while (y%p==0){
            y/=p;
            fatores.push_back(p);
        }
    }
    if (y > 1) fatores.push_back(y);
    int i = 0;
    long long proximoDivisor = fatores[i];

    
    while (true) {

        long long pulo = min(k,(proximoDivisor-x)/passo);
        x += passo*pulo;
        k -= pulo;
        passo = proximoDivisor;
        i++;
        if (i == fatores.size()) {
            x += k*passo;
            k = 0;
        } else proximoDivisor *= fatores[i];

        
        if (k <= 0) break;

    }
    cout << x << endl;




    return 0;
}