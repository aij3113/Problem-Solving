#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);



int main(){
    int t;
    cin>>t;

    while(t--){
        int n,flag=0,x;
        cin>>n;

        int arr[n+5];

        cin>>arr[0]>>arr[1];
        if(arr[0]==arr[1]){
            flag=1;
        }
        for(int i=2;i<n;i++){
            cin>>arr[i];
            if(flag==1 && arr[i]!=arr[0]){
                x=i+1;
                flag=-1;
            }
            if(flag==0){
                if(arr[i]==arr[0]){
                    x=2;
                }
                else{
                    x=1;
                }
                flag=-1;
            }
        }

        cout<<x<<endl;
    }


    return 0;
}
