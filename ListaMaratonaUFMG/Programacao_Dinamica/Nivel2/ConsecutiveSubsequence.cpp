#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n); 
    unordered_map<int,int> aux;
    
    int maior=1,pos=n-1;
    for(int i=0; i<n; i++){
        cin >> a[i];
        
        if(aux.find(a[i] - 1) == aux.end()){
            aux[a[i]] = 1;
        }
        else{
            aux[a[i]] = aux[a[i]-1] + 1;
            if(aux[a[i]] > maior){
                maior = aux[a[i]];
                pos = i;
            }
        }
    }

    vector<int> ans; ans.push_back(pos+1);
    int temp = a[pos];
    for(int i=pos-1; i>=0; i--){
        if(temp == a[i]+1){
            ans.push_back(i+1);
            temp = a[i];
        }
    }
    cout << ans.size() << endl;
    for(int i=ans.size()-1; i>=0; i--){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}