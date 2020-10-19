#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll prime[1000009]={0};
map<ll,int>t_p;

void seive(){
    prime[0]=1;
    prime[1]=1;
    for(ll i=2;i*i<1000007;i++){
        if(prime[i]==0){
            for(ll j=i*i;j<=1000007;j+=i){
                prime[j]=1;
            }
        }
    }
    for(ll i=2;i<=1000007;i++){
        if(prime[i]==0){
            t_p[i*i]=1;
        }
    }
}


int main(){
    seive();

    ll n,x;

    scanf("%lld",&n);

    while(n--){
        scanf("%lld",&x);

        if(t_p[x]==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }



    return 0;
}
