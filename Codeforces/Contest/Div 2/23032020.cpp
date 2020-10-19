#include<iostream>

using namespace std;

int main(){
    long long int t,n,k,i;

    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n>>k;
        if((k*k)<=n){
            if(n%2==0&&k%2==0)
                cout<<"YES"<<endl;
            else if(n%2==1&&k%2==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }


    return 0;
}
