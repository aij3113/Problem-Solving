#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;

    scanf("%lld",&t);

    while(t--){
        ll n,i;
        map<ll,bool>is;
        scanf("%lld",&n);

        ll arr[2*n+3];

        for(i=0;i<2*n;i++){
            scanf("%lld",&arr[i]);
        }

        for(i=0;i<2*n;i++){
            if(is[arr[i]]==0){
                printf("%lld ",arr[i]);
                is[arr[i]]=1;
            }
        }
        printf("\n");
    }

    return 0;
}
