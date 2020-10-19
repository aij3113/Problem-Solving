#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;

    cin>>t;

    while(t--){
        ll n,x,i,j,k;
        string ax;

        cin>>n;

        ll a[n+3];

        for(i=0;i<n;i++){
            cin>>a[i];
        }

        for(i=0;i<55;i++){
            if(i%2==0){
                ax+='a';
            }
            else{
                ax+='e';
            }
        }

        cout<<ax<<endl;


        for(i=0;i<n;i++){
            for(j=a[i];j<55;j++){
                if(ax[j]=='a'){
                    ax[j]='e';
                }
                else{
                    ax[j]='a';
                }
            }
            cout<<ax<<endl;
        }
    }

    return 0;
}
