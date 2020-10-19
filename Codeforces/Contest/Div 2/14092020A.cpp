#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast;

    ll t;
    cin>>t;
    while(t--){
        ll x,y,k,i,j,ans=0;

        cin>>x>>y>>k;
        x-=1;

        i=k+(k*y);
        i-=1;

        if(i%x){
           ans+=(i/x);
           ans+=1;
        }
        else{
            ans+=(i/x);
        }
        ans+=k;

        cout<<ans<<endl;
        //cout<<fixed<<setprecision(0)<<ans<<endl;


    }


    return 0;
}
