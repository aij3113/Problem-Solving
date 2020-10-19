#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast;
    int t;

    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int arr[n+3];

        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=n-1;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
