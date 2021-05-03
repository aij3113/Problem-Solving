#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);



int main(){
    fastio;
    int t;
    cin>>t;

    while(t--){
       int a,b,i,j,k,l,x=0,y=0;
       cin>>a>>b;

       string st;
       cin>>st;

       for(i=0;i<a+b;i++){
            if(st[i]=='0'){
                x+=1;
            }
            if(st[i]=='1'){
                y+=1;
            }
       }
       if(a<x || b<y){
            cout<<"-1"<<endl;
            continue;
       }
       if(a%2){
        if(st[(a+b)/2]=='1'){
            cout<<"-1"<<endl;
            continue;
        }
       }
       if(b%2){
        if(st[(a+b)/2]=='0'){
            cout<<"-1"<<endl;
            continue;
        }
       }
       if(a%2==1 && b%2==1){
            cout<<"-1"<<endl;
            continue;
       }

       k=a-x; l=b-y;
       int flag = 1;
       for(i=0,j=a+b-1;i<st.size();i++,j--){
            if(i>j){
                break;
            }
            if(i==j){
                if(k>=l && st[i]=='?'){
                    st[i]='0';
                    k-=1;
                }
                else if(l>k && st[i]=='?'){
                    st[i]='1';
                    l-=1;
                }
                break;
            }

            if(st[i]==st[j] && st[i]=='?'){
                if(k>=l){
                    st[i]='0';
                    st[j]='0';
                    k-=2;
                }
                else{
                    st[i]='1';
                    st[j]='1';
                    l-=2;
                }
            }
            else if((st[i]=='0'&&st[j]=='1')||(st[i]=='1'&&st[j]=='0')){
                flag=0;
                break;
            }
            else if(st[i]=='?' && st[j]=='0'){
                st[i]='0';
                k-=1;

            }
            else if(st[i]=='0' && st[j]=='?'){
                st[j]='0';
                k-=1;
            }
            else if(st[i]=='?' && st[j]=='1'){
                st[i]='1';
                l-=1;
            }
            else if(st[i]=='1' && st[j]=='?'){
                st[j]='1';
                l-=1;
            }

            if(l<0 || k<0 ){
                flag = 0;
                break;
            }
       }

       if(flag){
        cout<<st<<endl;
       }
       else{
        cout<<"-1"<<endl;
       }
    }


    return 0;
}
