#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;

    scanf("%lld",&n);

    while(n--){
        ll x,y,z;

        scanf("%lld %lld %lld",&x,&y,&z);

        if(x==y&&x>=z){
            printf("YES\n%lld %lld %lld\n",z,z,x);
        }
        else if((x==z&&x>=y)){
            printf("YES\n%lld %lld %lld\n",y,y,z);
        }
        else if(y==z&&y>=x){
            printf("YES\n%lld %lld %lld\n",x,x,y);
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
