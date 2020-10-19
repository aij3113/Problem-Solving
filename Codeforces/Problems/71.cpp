#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast;

    int t;
    cin>>t;

    while(t--){
        int n,i,a,j=0;

        cin>>n;

        for(i=0;i<n;i++){
            cin>>a;
            if(a==1){
                j+=1;
            }
        }
        if(j<=(n/2)){
            a=n/2;
            cout<<a<<endl;
            for(i=0;i<a;i++){
                cout<<"0 ";
            }
        }
        else{
            if((n/2)%2){
                a=n/2; a+=1;
                cout<<a<<endl;
                for(i=0;i<a;i++){
                    cout<<"1 ";
                }
            }
            else{
                a=n/2;
                cout<<a<<endl;
                for(i=0;i<a;i++){
                    cout<<"1 ";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}

