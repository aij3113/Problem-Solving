#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string b;
        cin>>b;
        int i,n;
        n=b.size();

        for(i=0;i<n;i++){
            if(i%2==0){
                cout<<b[i];
            }
        }
        cout<<b[n-1]<<endl;
    }


    return 0;
}
