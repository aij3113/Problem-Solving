#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;


int main(){
    fastio;

    int t;
    cin>>t;

    while(t--){
        ll r,d,b,x,y;

        cin>>r>>b>>d;

        x=max(r,b);
        y=min(r,b);

        if(d==0 && x!=y){
            cout<<"NO"<<endl;
            continue;
        }

        if(((1+d)*y)>=x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }



    return 0;
}
