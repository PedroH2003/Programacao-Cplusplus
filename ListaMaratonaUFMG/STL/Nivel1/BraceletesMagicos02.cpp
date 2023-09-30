#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        string a, b; cin >> a >> b;
        char ans='N';
        int t1=0, t2=0;

        int j=0, w=a.size()-1;
        for(int i=0; i<b.size(); i++){
            if(j < a.size() and a[j] == b[i]){
                j++;
            }
            else if(j < a.size()){
                j = 0;
                if(t1 != 0 and t2 == 0){
                    break;
                }
                else if(t1 != 0){
                    t1 = 2;
                }
            }
            else{
                ans = 'S';
                break;
            }
            
            if(w >= 0 and a[w] == b[i]){
                w--;
            }
            else if(w >= 0){
                w = a.size()-1;
                if(t2 != 0 and t1 == 0){
                    break;
                }
                else if(t2 != 0){
                    t2 = 2;
                }
            }
            else{
                ans = 'S';
                break;
            }

            if(t1 == 2 and t2 == 2){
                break;
            } 

            if(i == b.size()-1 and (j != 0 or w != a.size()-1))
            {
                if(j == a.size()){
                    ans = 'S';
                    break;
                }
                else if(j != 0){
                    t1 = 1;
                }

                if(w == -1){
                    ans = 'S';
                    break;
                }
                else if(w != a.size()-1){
                    t2 = 1;
                }

                i = -1;
            }

        }

        cout << ans << endl;
    }

    return 0;
}
