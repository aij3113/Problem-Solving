#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x,a[6]={0,0,0,0,0,0},ans=0,i,j,k;

    cin>>n;

    for(i=0;i<n;i++){
        cin>>x;
        a[x]+=1;
    }

    ans=a[4];

    if(a[3]<=a[1]){
        ans+=a[3];
        a[1]-=a[3];
        a[3]=0;
    }
    else{
        ans+=a[3];
        a[3]=0;
        a[1]=0;
    }

    if(a[2]%2==0){
        ans+=(a[2]/2);
    }
    else{
        ans=ans+(a[2]/2)+1;
        a[1]-=2;
    }
    if(a[1]>0){
        if(a[1]%4==0){
            ans+=(a[1]/4);
        }
        else{
            ans=ans+(a[1]/4)+1;
        }
    }

    cout<<ans<<endl;


    return 0;
}
