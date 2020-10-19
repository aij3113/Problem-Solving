#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin>>t;
    while(t--){
        ll n,i,j=0;
        cin>>n;
        ll arr[n+3];

        cin>>arr[0];
        for(i=1;i<n;i++){
            cin>>arr[i];
            if(arr[i]!=arr[0]){
                j=1;
            }
        }
        if(j==1){
            cout<<1<<endl;
        }
        else{
            cout<<n<<endl;
        }

    }

    return 0;
}
