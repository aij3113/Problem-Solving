#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,sum=0,sum1=0,arr[101];

    cin>>n;

    for(i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    sort(arr,arr+n,greater<int>());

    for(i=0;i<n;i++){
        sum1+=arr[i];
        if(sum1>(sum/2)){
            break;
        }
    }
    cout<<i+1<<endl;

    return 0;
}

