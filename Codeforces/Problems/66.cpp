#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,x,y,z,ans=0,i,j;

        cin>>a>>b>>c>>x>>y>>z;

        if(y>c){
         //   cout<<"OK1  "<<ans<<endl;
            ans+=(c*2);
            y=y-c;
            c=0;
       // cout<<"OK11  "<<ans<<endl;
        }
        else if(c>=y){
          //      cout<<"OK2  "<<ans<<endl;
           ans+=(y*2);
           c-=y;
           y=0;
       // cout<<"OK22  "<<ans<<endl;
        }
        if(z>=(a+c)){
           // cout<<"OK3  "<<ans<<endl;
            z=z-(a+c);
            ans-=z*2;
            //cout<<"OK33  "<<ans<<endl;
        }
        cout<<ans<<endl;
    }


    return 0;
}
