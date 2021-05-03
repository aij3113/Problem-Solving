#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int main(){
    fastio;

    vector<ll>ft;
    ft.push_back(1);
    ll i,j;

    for(i=1;i<100009;i++){
        j=ft[i-1]*i;
        j=j%(1000000007);
        ft.push_back(j);
    }



    int t;
    cin>>t;

    while(t--){
        ll n,k,ans;
        cin>>n>>k;

        ans=(ft[n-1])%(1000000007);
        cout<<ans<<endl;

    }




    return 0;
}

