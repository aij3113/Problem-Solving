#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast;
    ll t;

    cin>>t;
    while(t--){
        ll n,i,ans=0;
        cin>>n;
        ll arr[n+3];

        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>=0){
                ans+=arr[i];
            }
            else{
                if(ans>=abs(arr[i])){
                    ans+=arr[i];
                }
                else{
                    ans=0;
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}

