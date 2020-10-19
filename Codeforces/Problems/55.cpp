#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;

    scanf("%lld",&t);

    while(t--){
        ll n,x,i,j,k,l,ans=0;

        scanf("%lld %lld",&n,&x);
        ll arr[n+3];

        for(i=1;i<=n;i++){
            scanf("%lld",&arr[i]);
        }

        sort(arr+1,arr+(n+1),greater<ll>());

        l=1;
        for(i=1;i<=n;i++){
           if((arr[i]*l)>=x){
                ans+=1;
                l=1;
           }
           else{
                l+=1;
           }
        }

        printf("%lld\n",ans);

    }


    return 0;
}
