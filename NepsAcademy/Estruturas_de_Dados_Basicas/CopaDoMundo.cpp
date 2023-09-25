#include <bits/stdc++.h>

using namespace std;

int main(){

    queue<char> times;
    char t = 'A';
    
    for(int i=0; i<16; i++){
        times.push(t);
        t++;
    }

    int i = 15;
    while(i--){
        int m, n; cin >> m >> n;
        int temp;
        if(m > n){
            temp = times.front();
            times.pop(); times.pop();
            times.push(temp);
        }
        else{
            times.pop();
            temp = times.front();
            times.pop();
            times.push(temp);
        }
    }
    cout << times.front();

    return 0;
}