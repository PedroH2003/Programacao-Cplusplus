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
    int a;cin>>a;
    int b;cin>>b;

    if((((b-a)==3)and(b%2==1))or(((b-a)==2)and(b%2==1))){
        if((b-a)==2){
            for(int c=0;c<b;c++){
                if((c+1)%2==0) cout<<"-";
                else cout<<"X";
            }cout<<endl;
        }
        for(int c=0;c<b;c++){
            if((c+1)%2==0) cout<<"X";
            else cout<<"-";
        }cout<<endl;

        for(int c=0;c<b;c++){
            if((c+1)%2==0) cout<<"-";
            else cout<<"X";
        }cout<<endl;

    }else if(((b-a)==2)and(b%2==0)){
        for(int c=0;c<b;c++){
            if((c+1)%2==0) cout<<"-";
            else cout<<"X";
        }cout<<endl;

    }else cout<<"Ultimo*"<<endl;
    return 0;
}