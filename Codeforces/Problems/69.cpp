#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;
    while(t--){
        ll a,b,c,d,e,f,cpt,ans=0,k,bn,sn,n;

        cin>>a>>b;
        cin>>c>>d
        cin>>e>>f;



        if(e>f){
            swap(e,f);
            swap(c,d);
        }

        k=a/small;
        ans+=min(sn,k);

        a-=(min(sn,k)*small);
        sn-=min(sn,k);

        k=a/big;
        ans+=min(bn,k);

        bn-=min(bn,k);

        k=b/small;
        ans+=min(sn,k);

        b-=(min(sn,k)*small);

        k=b/big;
        ans+=min(bn,k);

        cout<<ans<<endl;
    }


    return 0;
}
