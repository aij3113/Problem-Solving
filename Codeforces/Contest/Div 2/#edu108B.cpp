#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int m,n,k;


int main(){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int k,i,j;
        bool ans=false;
        cin>>n>>m>>k;

        if((n*m)-1==k){
            ans=true;
        }


        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}
