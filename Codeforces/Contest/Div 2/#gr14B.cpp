#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main(){
    fastio;

    ll i,j;
    int t;
    cin>>t;

    map<ll,int>mp;

    for(i=2;i<1000000009;i=i*2){
        mp[i]=-1;
    }

    for(i=2;i<31623;i++){
        if((i & 1)==0){
           mp[i*i]=-1;
        }
        mp[(i*i)*2]=-1;

    }


    while(t--){
        ll n;
        cin>>n;

        if(mp[n]==-1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

