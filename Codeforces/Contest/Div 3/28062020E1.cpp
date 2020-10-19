#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    long long int t,n,i,k,a[4],ans=0;

    cin>>n>>k;

    while(n--){
        cin>>a[0]>>a[1]>>a[2];

        if(a[1]==1&&a[2]==1){
            ans+=a[0];
        }
    }
    if(ans>0){
        cout<<ans<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }


    return 0;
}

