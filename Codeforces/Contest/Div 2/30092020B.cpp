#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,i,j,k;

    cin>>n;

    ll arr[n+3];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);

    j=n-1;
    double x,p,ans=0,ans1=0;
    x=ceil(pow(arr[n-1],pow(j,-1)));
    p=x-1;
    ans+=arr[0]-1;
    ans1=ans;

    for(i=1;i<n;i++){
        k=pow(x,i);
        ans+=abs(k-arr[i]);
        k=pow(p,i);
        ans1+=abs(k-arr[i]);

    }
    cout<<fixed<<setprecision(0)<<min(ans,ans1)<<endl;

    return 0;
}

