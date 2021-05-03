#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;


int main(){
    fastio;
    int t;
    cin>>t;

    while(t--){
        int n,i,x;
        cin>>n;

        vector<int>o,e;

        for(i=0;i<n;i++){
            cin>>x;
            if(x%2){
                e.push_back(x);
            }
            else{
                o.push_back(x);
            }
        }
        if(e.size()>o.size()){
            for(i=0;i<e.size();i++){
                cout<<e[i]<<" ";
            }
            for(i=0;i<o.size();i++){
                cout<<o[i]<<" ";
            }
        }
        else{

            for(i=0;i<o.size();i++){
                cout<<o[i]<<" ";
            }
            for(i=0;i<e.size();i++){
                cout<<e[i]<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}

