#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,i,j,k,l=0,sum=0,x,y;
    vector<ll>ma,ca;
    map<ll,ll>ba;

    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        sum+=x;
        ma.push_back(x);
        ba[x]+=1;
    }

    for(i=0;i<n;i++){
        x=sum-ma[i];
        ba[ma[i]]-=1;;
        if(x%2==0){
            if(ba[x/2]){
                l+=1;
                ca.push_back(i+1);
            }
        }
        ba[ma[i]]+=1;
    }

    cout<<l<<endl;

    if(l>0){
        for(i=0;i<l;i++){
            cout<<ca[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
