#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;

    cin>>t;
    while(t--){
        ll n,i,j=1,k,l,m,r;
        cin>>n;
        ll a[n+3];

        for(i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]!=i)
                j=0;
        }
        if(j==1){
            cout<<"NO"<<endl;
        }
        else{
            j=0;
            k=0;
            for(i=2;i<n;i++){
                if(a[i]>a[i-1]){
                    j=1;
                    l=i-1;
                }
                if(j==1){
                    if(a[i]>a[i+1]){
                        k=1;
                        m=i;
                        r=i+1;
                        break;
                    }
                }
            }
            if(j==1&&k==1){
                cout<<"YES"<<endl;
                cout<<l<<" "<<m<<" "<<r<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}
