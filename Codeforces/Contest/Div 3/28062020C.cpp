#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t,n,i,l,r;
    string s;

    cin>>t;

    while(t--){
        l=0;
        r=0;
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++){
            if(s[i]=='('){
                l+=1;
            }
            else if(s[i]==')'){
                if(l==0){
                    r+=1;
                }
                else{
                    l-=1;
                }
            }
        }

        cout<<r<<endl;

    }


    return 0;
}
