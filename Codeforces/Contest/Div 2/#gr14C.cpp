#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;


int main(){
    fastio;

    int t;
    cin>>t;

    while(t--){
        ll m,n,x,y,z,a,b,c;
        cin>>n>>m>>x;

        priority_queue<pair<ll,ll>>ari;
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
        int arr[n+5],sum[m+5],arrin[n+5];

        for(int i=0;i<n;i++){
            cin>>arr[i];
            ari.push({arr[i],i});
        }
        for(int i=0;i<=m;i++){
            sum[i]=0;
        }

        for(int i=0;i<n;i+=m){
            if(i==0){
                for(int j=0;j<m;j++){
                    pair<ll,ll>pp;
                    pp=ari.top();
                    a=pp.first;
                    b=pp.second;
                    sum[j]+=a;
                    arrin[b]=j+1;
                    pq.push({sum[j],j});
                    ari.pop();
                }
            }
            else{
                for(int j=0;j<m;j++){
                    pair<ll,ll>pp;
                    pp=ari.top();
                    a=pp.first;
                    b=pp.second;
                    pair<ll,ll>p;
                    p=pq.top();
                    y=p.first;
                    z=p.second;
                    sum[z]+=a;
                    arrin[b]=j+1;
                    ari.pop();
                    pq.pop();
                }
                for(int j=0;j<m;j++){
                    pq.push({sum[j],j});
                }
            }
        }
        sort(sum,sum+m);
        if((sum[m-1]-sum[0])>x){
                //cout<<sum[m]<<" "<<sum[0]<<endl;
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<arrin[i]<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}
