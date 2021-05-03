#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;


int main(){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int i,j,k,n,arr[105],x,sum=0;

        cin>>n>>x;
        bool ans=true;

        for(i=0;i<n;i++){
            cin>>arr[i];
        }

        for(i=0;i<n;i++){
            if(sum<x){
                sum+=arr[i];
            }

            if(sum==x){
                ans=false;
                if(i<n-1){
                    swap(arr[i],arr[i+1]);
                    ans=true;
                    break;
                }
            }
        }

        if(ans){
            cout<<"YES"<<endl;
            for(i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }



    return 0;
}
