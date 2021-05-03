#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;


int main(){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n,x,cnt=0;
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>x;
            if(x==1 || x==3){
                cnt+=1;
            }
        }
        cout<<cnt<<endl;
    }


    return 0;
}
