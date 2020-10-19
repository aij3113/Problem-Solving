#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool solve(ll arr[]){
    int cnt=0,l;

    for(l=0;l<4;l++){
        if(arr[l]%2==0){
            cnt++;
        }
    }
    if(cnt>=3)
        return true;
    else
        return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll arr[7],i,j=0;

        for(i=0;i<4;i++){
            cin>>arr[i];
        }
        if(solve(arr)){
            cout<<"YES\n";
            continue;
        }
        if(arr[0]>0&&arr[1]>0&&arr[2]>0){
            arr[0]-=1;
            arr[1]-=1;
            arr[2]-=1;
            arr[3]+=3;
        }
        if(solve(arr)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
