#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arr[100007],loc[100007];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

    int t;

    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n;

        vector<ll> p;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            loc[arr[i]]=i;
        }

        p.push_back(n);
        p.push_back(loc[n]);
        for(int i=n-1;i>0;i--){
            if(loc[i]<p.back()){
                p.push_back(loc[i]);
            }
        }
        for(int i=1;i<p.size();i++){
            for(int j=p[i];j<p[i-1];j++){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }



    return 0;
}

