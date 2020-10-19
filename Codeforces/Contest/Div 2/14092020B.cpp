#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast;

    ll t;
    cin>>t;
    while(t--){
        ll n,i,j,ans=0;
        vector<ll>v;

        cin>>n;

        ll arr[n+3],l[n+3];

        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=0;i<n;i++){
            cin>>l[i];
            if(l[i]==0){
                v.push_back(arr[i]);
            }
        }

        sort(v.begin(),v.end(),greater<ll>());

        j=0;
        for(i=0;i<n;i++){
            if(l[i]==0){
                arr[i]=v[j++];
            }
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
