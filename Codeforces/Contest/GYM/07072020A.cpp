#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,i,j=0,x,y=0;
    map<ll,bool>ma;
    vector<ll>ans;

    cin>>n>>m;

    for(i=0;i<n;i++){
        cin>>x;
        ma[x]=1;
    }

    for(i=1;;i++){
        if(ma[i]!=1){
            j+=i;
            if(j<=m){
                ans.push_back(i);
                y+=1;
            }
            else{
                break;
            }
        }
    }

    cout<<y<<endl;

    for(i=0;i<y;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


    return 0;
}
