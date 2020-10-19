#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,k,i,j;

        cin>>n>>k;

        if(k>=n){
            cout<<k-n<<endl;
        }
        else{
            if(k%2==1&&n%2==1){
                cout<<0<<endl;
            }
            else if(k%2==0&&n%2==0){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
    }


    return 0;
}
