#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){
        ll n,i;
        cin>>n;
        ll a[n+3];

        for(i=0;i<n;i++){
            cin>>a[i];
            if(i%2==0){
                if(a[i]<0){
                    a[i]*=(-1);
                }
            }
            else{
                if(a[i]>0){
                    a[i]*=(-1);
                }
            }
        }

        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
