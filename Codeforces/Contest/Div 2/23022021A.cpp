#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;

    while(t--){
        ll a,b,c,x,y,z,p;
        cin>>p>>a>>b>>c;

        if(p==a||p==b||p==c){
            cout<<"0"<<endl;
        }
        else{
            x=a-(p%a);
            y=b-(p%b);
            z=c-(p%c);

            cout<<min({x,y,z})<<endl;
        }
    }



    return 0;
}


