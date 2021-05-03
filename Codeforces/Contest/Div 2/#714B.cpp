#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;


int main(){
    fastio;
   int t;
    cin>>t;

    while(t--){
       int a,b,i,j,fl=1,n;
       cin>>a>>b;

       string st;
       cin>>st;

       n=st.size();

       for(i=0;i<n;i++){
        if(st[i]!='?'){
            if(st[n-i-1]=='?'){
                st[n-i-1]=st[i];
            }
            else if(st[i]!=st[n-i-1]){
                fl=0;
                break;
            }
        }
       }
       if(fl==0){
        cout<<"-11"<<endl;
        continue;
       }

       if(a%2==1 && st[n/2]=='?'){
        st[n/2]='0';
        a-=1;
       }

       if(b%2==1 && st[n/2]=='?'){
        st[n/2]='1';
        b-=1;
       }

       for(i=0;i<n;i++){
        if(i>(n-i-1)){
            break;
        }
        if(st[i]=='?'){
            if(a>0){
                st[i]='0';
                st[n-i-1]='0';
                a-=2;
            }
            else if(b>0){
                st[i]='1';
                st[n-i-1]='1';
                b-=2;
            }
        }
        else if(st[i]=='0'){
            a-=2;
        }
        else if(st[i]=='1'){
            b-=2;
        }
       }

       if(a!=0 || b!=0){
        fl=0;
       }

       if(fl){
        cout<<st<<endl;
       }
       else{
        cout<<"-1"<<endl;
       }
    }


    return 0;
}
