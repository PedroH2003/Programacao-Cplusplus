#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

long long calculo(long long n){
    long long ans1 = ((n * n) - 3) * 4;
    long long ans2 = ((n * n) - 4) * 8;
    long long ans3 = ((n * n) - 5) * (((n - 4) * 4) + 4);
    long long ans4 = ((n * n) - 7) * ((n - 4) * 4);
    long long ans5 = ((n * n) - 9) * ((n * n) - ((n * 4)-4) - (((n-2)*4)-4));
    long long ans = ans1 + ans2 + ans3 + ans4 + ans5;
    ans /= 2;
    return ans;
}

int main(){ _

    long long num; cin >> num;
    long long ans = 0;
    for(long long i=1; i<=num; i++){
        ans = calculo(i);
        cout << ans << endl;
    }

    return 0;
}