#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;

    scanf("%d",&t);

    while(t--){
        int n,x,cnt=0;
        scanf("%d",&n);


        int arr[n+5],a=0,b=0,c=0,d=0;

        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            if(arr[i]%3==1){
                b+=1;
            }
            else if(arr[i]%3==2){
                c+=1;
            }
            else{
                a+=1;
            }
        }
        x=n/3;

        d=max({a,b,c});
        while(d!=x){
            if(d==a){
                b+=(a-x);
                cnt+=(a-x);
                a=x;
            }
            else if(d==b){
                c+=(b-x);
                cnt+=(b-x);
                b=x;
            }
            else{
                a+=(c-x);
                cnt+=(c-x);
                c=x;
            }
            d=max({a,b,c});
        }

        printf("%d\n",cnt);
    }


    return 0;
}
