#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;


int main(){
    fastio;

    ll n,q,i,j,x;
    cin>>n>>q;

    vector<ll> a,b,c;

    map<ll,ll> mp;
    for(i=i;i<51;i++){
        mp[i]=0;
    }

    for(i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
        if(mp[x]==0){
            mp[x]=i+1;
        }
    }

    for(i=0;i<q;i++){
        cin>>x;
        b.push_back(x);
        c.push_back(mp[x]);
        for(j=1;j<51;j++){
            if(mp[j]!=0 && mp[j]<mp[x]){
                mp[j]=mp[j]+1;
            }
        }
        mp[x]=1;
    }

    for(i=0;i<q;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;


    return 0;
}
