#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t,n,i,j;

    cin>>t;

    while(t--){
        long long int ans=0;
        cin>>n;
        if(n>1){
            for(i=0;;i++){
                if(n==1){
                    break;
                }
                else if(n%6==0){
                    n=n/6;
                    ans+=1;
                }
                else if((n%6)!=0){
                    if(n%3==0){
                       n=n/3;
                       ans+=2;
                    }
                    else{
                        ans=-1;
                        break;
                    }
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
