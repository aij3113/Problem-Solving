#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast;
    int m,n,ans=0,i,j;

    cin>>n>>m;

    while(n>0){
        n-=1;
        ans+=1;
        if(ans%m==0){
            n+=1;
        }
    }

    cout<<ans<<endl;

    return 0;
}
