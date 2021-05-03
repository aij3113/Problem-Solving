#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;


int main(){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n,m=0,t=0,flag=1,l=-1,r=-1;
        cin>>n;

        string st;
        cin>>st;

        for(int i=0;i<n;i++){
            if(st[i]=='M'){
                if(l==-1){
                    l=i;
                }
                r=i;
                m+=1;
                t-=1;
                if(t<0){
                    flag=0;
                    break;
                }
            }
            else{
                t+=1;
            }
        }
        if(r==n-1){
            flag=0;
        }
        if(m!=t){
            flag=0;
        }
        m=0;
        t=0;
        l=-1;
        r=-1;
        for(int i=n-1;i>=0;i--){
            if(st[i]=='M'){
                if(l==-1){
                    l=i;
                }
                r=i;
                m+=1;
                t-=1;
                if(t<0){
                    flag=0;
                    break;
                }
            }
            else{
                t+=1;
            }
        }
        if(r==n-1){
            flag=0;
        }
        if(m!=t){
            flag=0;
        }

        if(flag) {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }



    return 0;
}

