#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100];

int main(){
    int t;

    scanf("%d",&t);

    while(t--){
        int n,cnt=0;
        scanf("%d",&n);

        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n-1;i++){
            int a,b,c;
            double z;
            a=max(arr[i],arr[i+1]);
            b=min(arr[i],arr[i+1]);
            z=(a*1.0)/(b*1.0);

            while(z>2.0){
                cnt+=1;
                b*=2;
                z=(1.0*a)/(b*1.0);
            }
        }
        printf("%d\n",cnt);
    }


    return 0;
}
