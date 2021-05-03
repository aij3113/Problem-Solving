#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;


int main(){
    fastio;

    int t;
    cin>>t;

    while(t--){
        ll a,b,c,x,y,z;

        cin>>a>>b>>c;

        x=pow(10,(a-1));
        y=pow(10,(b-1));
        z=pow(10,(c-1));

        if(x>=y){
            x+=z;
        }
        else{
            y+=z;
        }

        cout<<x<<" "<<y<<endl;

    }


    return 0;
}

