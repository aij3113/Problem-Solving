#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define IM 1000007

bool prime[1000007];
vector<ll>p;

void seive(){
    for(ll i=0;i<IM;i++){
        prime[i]=true;
    }

    for(ll i=2;i*i<IM;i++){
        if(prime[i]){
            for(ll j=i*i;j<IM;j+=i){
                prime[j]=false;
            }
        }
    }
    for(ll i=2;i<IM;i++){
        if(prime[i]){
            p.push_back(i);
        }
    }
}
int main(){
    fast;
    seive();

    int t;
    cin>>t;
    while(t--){
        ll i,j,d,x,y;
        cin>>d;

        for(i=0;i<p.size();i++){
            if(p[i]>=1+d){
                x=p[i];
                j=i;
                break;
            }
        }
        for(i=j+1;i<p.size();i++){
            if(p[i]>=x+d){
                y=p[i];
                break;
            }
        }

        cout<<min(x*x*x,x*y)<<endl;
    }

    return 0;
}
