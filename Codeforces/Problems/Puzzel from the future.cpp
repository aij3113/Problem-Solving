#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,i,j=1;
        string arr;

        cin>>n;
        cin>>arr;

        if(arr[0]=='1'){
            j=2;
        }
        cout<<"1";
        for(i=1;i<n;i++){
            if(arr[i]=='1'){
                if(j==0||j==1){
                    cout<<"1";
                    j=2;
                }
                else if(j==2){
                    cout<<"0";
                    j=1;
                }
            }
            else{
                if(j==2||j==0){
                    cout<<"1";
                    j=1;
                }
                else if(j==1){
                    cout<<"0";
                    j=0;
                }
            }
        }
        cout<<endl;
    }


    return 0;
}
