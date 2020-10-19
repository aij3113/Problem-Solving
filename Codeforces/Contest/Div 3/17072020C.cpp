#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;

    scanf("%lld",&t);

    while(t--){
        ll n,i,j,k,l,r,loc,h;
        scanf("%lld",&n);

        ll arr[n+7];

        scanf("%lld",&arr[0]);
        k=0;
        for(i=1;i<n;i++){
            scanf("%lld",&arr[i]);
            if(arr[i]!=arr[0]){
                k=1;
            }
        }
        if(k==0){
            printf("0\n");
            continue;
        }

        j=0;
        for(i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                j=1;
                break;
            }
        }
        if(j==0){
            printf("0\n");
            continue;
        }

        l=0;
        for(i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                l=1;
                break;
            }
        }
        if(l==0){
            printf("0\n");
            continue;
        }

        for(i=n-1;i>=0;i--){
            if(arr[i]!=arr[i-1]){
                    r=arr[i];
                    loc=i-1;
                    l=arr[i-1];
                    break;
            }
        }
        if(l<r){
            for(i=loc;i>0;i--){
                if(arr[i]<arr[i-1]){
                    loc=i;
                    break;
                }
            }
            printf("%lld\n",loc);
        }
        else if(l>r){
            ll h1=0,h=0;
            for(i=loc;i>0;i--){
                if(arr[i]>arr[i-1]){
                        h1=i-1;
                        break;
                }
            }

            if(h1!=0){
            for(i=h1;i>0;i--){
                if(arr[i]<arr[i-1]){
                    h=i;
                    break;
                }
            }
            }

            printf("%lld\n",h);
        }
    }



    return 0;
}
