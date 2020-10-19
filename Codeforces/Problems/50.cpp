#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,i,j,x,y,ans=0;
    map<ll,ll>x_same,y_same;
    map<ll,ll>::iterator it1;
    map< pair<ll,ll>,ll>xy_same;
    map<pair<ll,ll>,ll>::iterator it2;

    cin>>n;
    for(i=0;i<n;i++){
        cin>>x>>y;
        x_same[x]+=1;
        y_same[y]+=1;
        xy_same[{x,y}]+=1;
    }

    for(it1=x_same.begin();it1!=x_same.end();it1++){
        if(it1->second>1){
            j=it1->second;
            ans+=(j*(j-1)/2);
        }
    }

    for(it1=y_same.begin();it1!=y_same.end();it1++){
        if(it1->second>1){
            j=it1->second;
            ans+=(j*(j-1)/2);
        }
    }

    for(it2=xy_same.begin();it2!=xy_same.end();it2++){
        if(it2->second>1){
            j=it2->second;
            ans-=(j*(j-1)/2);
        }
    }


    cout<<ans<<endl;


    return 0;
}
