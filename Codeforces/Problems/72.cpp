#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast;
    int m,n,a,b,ans=0,i,j;
    double k;

    cin>>n>>m>>a>>b;

    k=double(1.0*b/m);
    if(a>k){
        i=n%m;
        ans+=(int(n/m))*b;
        if(i*a>b){
            ans+=b;
        }
        else{
            ans+=(i*a);
        }
    }
    else{
        ans+=(n*a);
    }

    cout<<ans<<endl;

    return 0;
}
