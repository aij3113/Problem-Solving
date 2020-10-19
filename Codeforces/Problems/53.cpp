#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){
        double n,i,j,ca=10,k,ans=0;
        string s;

        cin>>n>>k;
        cin>>s;
        for(i=0;i<s.size();i++){
            if(s[i]=='1'){
                ca=1;
                break;
            }
        }


        if(ca==1){
            ll cz=0,s1z=0,snz=0;

            if(s[0]=='0')
                s1z=1;
            if(s[n-1]=='0')
                snz=1;

            for(i=0;i<n;i++){
                if(s[i]=='0'){
                    cz+=1;
                }
                else{
                    if(s1z==1){
                        ans+=floor(cz/(k+1));
                        s1z=0;
                    }
                    else if(s1z==0){
                        cz-=(2*k);
                        if(cz>0){
                            ans+=ceil(cz/(k+1));
                        }
                    }
                    cz=0;
                }
            }

            if(snz==1){
                ans+=floor(cz/(k+1));
            }
        }
        else if(ca==10){
            ans+=ceil(n/(k+1));
        }
        cout<<ans<<endl;
    }


    return 0;
}
