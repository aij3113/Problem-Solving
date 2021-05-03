#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;


int main(){
    fastio;

    int t;
    cin>>t;

    while(t--){
        ll n,l,r,ans=0;
        map<pair<ll,,ll>,ll>mp;
        cin>>n>>l>>r;

        ans+=(abs(l-r))/2;
        ll arr[n+5];

        for(ll i=0;i<n;i++){
            cin>>arr[i];
            mp[{arr[i],1}]=0;
            mp[{arr[i],2}]=0;
        }

        for(ll i=0;i<l;i++){
            mp[{arr[i],1}]+=1;
        }

        for(ll i=l;i<n;i++){
            mp[{arr[i],2}]+=1;
        }
        sort(arr,arr+l);
        sort(arr+l,arr+n);

        if(l==0 || r==0){

        }

        ll j=0;
        for(ll i=0;i<n/2;i++){
            if(mp[arr[i]]>0){
                j+=1;
            }
        }

        cout<<ans+(j/2)<<endl;
    }


    return 0;
}

