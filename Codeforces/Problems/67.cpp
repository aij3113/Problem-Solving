#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,i,j,k=0,x;
        vector<ll>a,b,c;

        cin>>n;

        for(i=0;i<n;i++){
            cin>>x;
            a.push_back(x);
            b.push_back(x);
        }
        x=*min_element(a.begin(),a.end());
        for(i=0;i<n;i++){
            if(a[i]%x){
                c.push_back(i);
            }
        }
        if(c.size()){
            sort(a.begin(),a.end());
            for(i=0;i<c.size();i++){
                if(b[c[i]]!=a[c[i]]){
                    k+=1;
                    break;
                }
            }
            if(k){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
        else{
            cout<<"YES\n";
        }
    }


    return 0;
}
