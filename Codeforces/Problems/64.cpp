#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,x,n) for(i=x;i<n;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll i,n,ans=0,sum=0;
    cin>>n;

    ll arr[n+3];

    FOR(i,0,n){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    FOR(i,0,n){
        if(arr[i]>=sum){
            ans+=1;
            sum+=arr[i];
        }
    }

    cout<<ans<<endl;

    return 0;
}
