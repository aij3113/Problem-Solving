#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;

    scanf("%lld",&t);

    while(t--){
        ll n,i,j,p1,p2,ans=0,cn=0;

        scanf("%lld",&n);

        ll a[n+5];
        j=0;
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
            if(a[i]!=1&&j==0)
                j=1;
            if(a[i]==1){
                cn+=1;
            }
        }
        if(n==1){
            printf("First\n");
            continue;
        }
        if(cn==0){
            printf("First\n");
            continue;
        }
        if(j==0){
            if(n%2==0){
                printf("Second\n");
            }
            else{
                printf("First\n");
            }
            continue;
        }

        cn=0;
        for(i=0;i<n;i++){
            if(a[i]==1){
                cn+=1;
            }
            else{
                break;
            }
        }
        if(cn%2==1){
            printf("Second\n");
        }
        else if(cn%2==0){
            printf("First\n");
        }

    }


    return 0;
}
