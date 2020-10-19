#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    scanf("%lld",&t);

    while(t--){
        ll n,m,i,j=0,ans=0;
        map<ll,ll>p;

        scanf("%lld %lld",&n,&m);

        ll a[n+5],b[m+5];

        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
            if(p[a[i]]==0){
                p[a[i]]=1;
            }
        }
        for(i=0;i<m;i++){
            scanf("%lld",&b[i]);
            if(p[b[i]]==1&&ans==0){
                j=i;
                ans=1;
            }
        }

        if(ans==1){
            printf("YES\n%lld %lld\n",ans,b[j]);
        }
        else{
            printf("NO\n");
        }

    }



    return 0;
}
