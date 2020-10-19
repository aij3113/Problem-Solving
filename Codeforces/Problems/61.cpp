#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin>>t;
    while(t--){
        ll n,i,j,mx;
        string s;
        cin>>n>>s;

        ll arr[n+3],arr1[n+3],arr2[n+3];

        for(i=0;i<n;i++){
            cin>>arr[i];
        }

        mx=*max_element(arr,arr+n);
        for(j=0;j<n;j++){
            arr1[j]=mx-arr[j];
        }

        mx=*max_element(arr1,arr1+n);
        for(j=0;j<n;j++){
            arr2[j]=mx-arr1[j];
        }

        j=s.size();
        if((int)s[j-1]%2){
            cout<<arr1[0];
            for(i=1;i<n;i++){
                cout<<" "<<arr1[i];
            }
        }
        else{
            cout<<arr2[0];
            for(i=1;i<n;i++){
                cout<<" "<<arr2[i];
            }
        }
        cout<<endl;
    }

    return 0;
}
