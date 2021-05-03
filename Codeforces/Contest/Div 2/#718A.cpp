#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

ll po(int d){
    ll n=1;
    for(int i=1;i<=d;i++){
        n*=10;
    }
    return n;
}

int dcn(ll n){
    int d=0;

    while(n!=0){
        n/=10;
        d+=1;
    }
    return d;
}

int main(){
    fastio;

    int t;
    cin>>t;

    while(t--){
        ll n,i,j,ans=0;
        int dig;
        cin>>n;

        if(n<2050){
            cout<<"-1"<<endl;
            continue;
        }

        dig=dcn(n);

        while(n>0){
           // cout<<n<<" "<<dig<<endl;

            if(n<(2050*po(dig-4))){
                n-=2050*(po(dig-5));
            }
            else{
                n-=2050*(po(dig-4));
            }
            ans+=1;

            if(n<2050){
                break;
            }
            dig=dcn(n);
            //cout<<n<<" "<<dig<<" "<<ans<<endl;

        }

        if(n==0){
            cout<<ans<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }




    }


    return 0;
}
