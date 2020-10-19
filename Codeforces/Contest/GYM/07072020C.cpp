#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k,i,j,x,mid,loc;
    vector<ll>ma,ma1;
    map<ll,ll>lc;

    cin>>n>>k;

    for(i=0;i<n;i++){
        cin>>x;
        ma.push_back(x);
    }
    mid=(n-1)/2;
    sort(ma.begin(),ma.end());

    j=k;
    for(i=1;i<=mid;i++){
        x=(ma[mid+i]-ma[mid+i-1]+1)*i;
        loc=mid+i;
        if(x>j){
            break;
        }
        else{
            j-=x;
        }
        if(j==0){
            break;
        }
    }

    if(j>=i){
        j=ceil(j/i);
    }

    if(j>0){
        cout<<ma[loc-1]+j;
    }
    else if(j==0){
        cout<<ma[loc];
    }

/*
    for(i=0;i<k;i++){
        ma[mid]+=1;
        sort(ma.begin()+mid,ma.end());
    }

    cout<<ma[mid]<<endl;
*/

    return 0;
}
