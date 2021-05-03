#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

ll arr[100007]={0};

int main(){
    fastio;

    ll n,i,mm=1,cnt=1;

    cin>>n;



    for(i=1;i<=n;i++){
        if(__gcd(n,i)==1){
            arr[i]=1;
            mm=(mm*i)%n;
        }
    }
    if(mm!=1){
        arr[mm]=0;
    }

    //cout<<k<<endl;
    for(i=2;i<=n;i++){
        if(arr[i]==1){
            cnt+=1;
        }
    }

    cout<<cnt<<endl;
    for(i=1;i<=n;i++){
        if(arr[i]==1){
            cout<<i<<" ";
        }
    }
    cout<<endl;



    return 0;
}

