#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,k,i,j,u,v,l,ans=10000000009;
    vector<ll>road1,road2,fee;
    map<ll,ll>kt;

    cin>>n>>m>>k;
    for(i=0;i<m;i++){
        cin>>u>>v>>l;
        road1.push_back(u);
        road2.push_back(v);
        fee.push_back(l);
    }
    if(k>0){
        for(i=0;i<k;i++){
            cin>>j;
            kt[j]=1;
        }

        for(i=0;i<m;i++){
            int x=0;
            if(kt[road1[i]]==1){
                x+=1;
            }
            if(kt[road2[i]]==1){
                x+=1;
            }

            if(x==1){
                if(ans>fee[i]){
                    ans=fee[i];
                }
            }
        }

        if(ans==10000000009){
            ans=-1;
        }
    }

    else{
        ans=-1;
    }

    cout<<ans<<endl;


    return 0;
}
