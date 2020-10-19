#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        ll n,i;
        cin>>n;
        ll arr[n+3];

        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        ll ans=0;
        for(i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                ans+=arr[i]-arr[i+1];
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
