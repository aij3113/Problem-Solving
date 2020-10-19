#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int a,b,n,ans=0;

        cin>>a>>b>>n;

        while(1){
            if(a>=b){
                b+=a;
                ans+=1;
            }
            else{
                a+=b;
                ans+=1;
            }

            if(a>n||b>n){
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
