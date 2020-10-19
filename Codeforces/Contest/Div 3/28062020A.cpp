#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int x,y,n,ans,t,i,j;

    cin>>t;

    while(t--){
        cin>>x>>y>>n;

        i=n%x;

        if(i>y)
            ans=n-(i-y);
        else if(i==y)
            ans=n;
        else
            ans=n-(i+(x-y));

        cout<<ans<<endl;
    }



    return 0;
}
