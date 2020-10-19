#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,i,j,k,ca=0,cb=0,ans=0;
        string a,b;
        map<char,int>c1,c2;

        cin>>n;
        cin>>a>>b;
        int flg=0;
        for(i=0;i<n;i++){
            if(a[i]>b[i]){
                flg=1;
                break;
            }
        }
        if(flg){
            cout<<"-1"<<endl;
            continue;
        }

        for(i=0;i<n;i++){
            if(a[i]!=b[i]){
                if(c1[a[i]]==0){
                    ca+=1;
                    c1[a[i]]=1;
                }
                if(c2[b[i]]==0){
                    cb+=1;
                    c2[b[i]]=1;
                }
            }
        }

        cout<<max(ca,cb)<<endl;
    }

    return 0;
}
