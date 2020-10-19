#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ar[n+3];

        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        if(ar[0]+ar[1]<=ar[n-1]){
            cout<<"1 2 "<<n<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}

