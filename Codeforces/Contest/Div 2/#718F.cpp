#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main(){
    fastio;

    int n,a,b,i,j,k=1,ans=-1;
    cin>>n;

    map<pair<int,int>,int>mp;

    for(i=0;i<n;i++){
        cin>>a>>b;
        arr[a][b]=1;
    }

    int st[n+3];
    for(i=0;i<=n;i++){
        st[i]=0;
    }
    st[1]=1;
    while(k<(pow(2,n)-n)){
        int x=1,c=0;
        for(i=n;i>0;i--){
            c=(st[i]+x)/2;
            st[i]=(st[i]+x)%2;
            x=c;
        }

    }





    return 0;
}
