#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    int t;
    cin>>t;

    while(t--){
        ll x,y,z;
        cin>>x;

        for(int i=1+x;;i++){
            int fl=0;
            for(int j=2;j*j<=i+1;j++){
                if(i%j==0){
                    fl=1;
                }
                if(fl){
                    break;
                }
            }
            if(fl==0){
                y=i;
                break;
            }
        }
        for(int i=y+x;;i++){
            int fl=0;
            for(int j=2;j*j<=i+1;j++){
                if(i%j==0){
                    fl=1;
                }
                if(fl){
                    break;
                }
            }
            if(fl==0){
                z=i;
                break;
            }
        }
        cout<<min((y*z),(y*y*y))<<endl;
    }



    return 0;
}


