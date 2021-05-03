#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;


int main(){
    fastio;

    int t;
    cin>>t;

    while(t--){
        ll n,m,i,j,x,y;
        cin>>n>>m;
        ll mm[m+3];

        vector<ll>b[n+1];
        priority_queue<pair<ll,ll>>qq;

        for(i=0;i<n;i++){
            vector<ll>ab;
            for(j=0;j<m;j++){
                cin>>x;
                ab.push_back(x);
                b[i].push_back(x);
            }
            sort(ab.begin(),ab.end());

            if(i==0){
                for(j=0;j<m;j++){
                    b[i][j]=ab[j];
                    mm[j]=ab[j];
                    qq.push({ab[j],j});
                }
            }
            else{
                for(j=0;j<m;j++){
                    pair<ll,ll>p;
                    p=qq.top();
                    x=p.first;
                    y=p.second;
                    b[i][y]=ab[j];
                    if(mm[y]>ab[j]){
                        mm[y]=ab[j];
                    }
                    qq.pop();
                }
                for(j=0;j<m;j++){
                    qq.push({mm[j],j});
                }
            }
        }


        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }

    }



    return 0;
}
