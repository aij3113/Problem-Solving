#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        long long int k,n,i,j,zero=0,cunt=0,bk=0;
        string s;
        cin>>k>>n;

        for(i=0;i<k;i++){
            cin>>s[i];
            if(s[i]=='0'){
                zero+=1;
                if(zero>(2*n)){
                    zero-=(n+1);
                    cunt+=1;
                }
            }
            else{
                bk+=1;
                zero=0;
            }
        }

        if(bk==0){
            cout<<cunt+1<<endl;
        }
        else if(){

        }
        else{
            cout<<cunt<<endl;
        }
    }


    return 0;
}
