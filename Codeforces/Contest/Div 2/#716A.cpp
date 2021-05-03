#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;


int main(){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n,arr[107],flag=0,i,j;

        cin>>n;

        for(i=0;i<n;i++){
            cin>>arr[i];

            j=sqrt(arr[i]);


            if((j*j)!=arr[i] && flag==0){
                flag=1;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }


    return 0;
}

