#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    scanf("%d",t);

    while(t--){
        int n,i,j,k,l,r,com=0,q=0,qc=0;
        string s,su="abacaba";
        cin>>n;
        cin>>s;
        char c='d';

        l=0;
        for(i=0;i<n;i++){
            if(s[i]!='?')
            {
                l=1;
                break;
            }
        }
        if(l==0){
            cout<<"YES\nabacaba";
            if(n-7){
                for(i=0;i<n-7;i++){
                    cout<<"s";
                }
            }
            cout<<"\n";
        }
        else{
            for(i=0;i<n-6;i++){
                l=0;
                if(s[i]==su[0]){
                    k=1;
                }
                else if(s[i]=='?')
                    q+=1;
                if(k||q){
                    for(j=1;j<6;j++){
                        if(s[i+j]==su[j]){
                        k+=1;
                        }
                        else if(s[i+j]=='?'){
                            q+=1;
                        }
                    }
                    if(k==7){
                        l+=1;
                    }
                    else if(q==7){
                        qc+=1;
                    }
                    else if(k+q==7){
                        com+=1;
                    }
                }
            }
        }

        if(l==1){
            cout<<"YES\n";
            for(i=0;i<n;i++){
                if(s[i]=='?')
                    cout<<"w";
                else
                    cout<<s[i];
            }
            cout<<"\n";
        }
        else if(l==0&&com+qc>0){
            cout<<"YES\n";
           /* for(i=0;i<n;i++)
            if(s[i]!='?'){
                cout<<s[i];
            }
            else{
                if()
            } */
        }
        else{

        }
    }



    return 0;
}
