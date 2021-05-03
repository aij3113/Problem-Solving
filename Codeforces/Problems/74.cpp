#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fast;
    int t;
    cin>>t;

    while(t--){
        int n,j;
        vector<char>a;
        char x;
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>x;
            a.push_back(x);
        }

        if(a[0]=='1'){
            j=2;
        }
        else{
            j=1;
        }
        cout<<"1";
        for(int i=1;i<a.size();i++){
            if(a[i]=='0'&&j==0){
                cout<<"1";
                j=1;
            }
            else if(a[i]=='0'&&j==1){
                cout<<"0";
                j=0;
            }
            else if(a[i]=='0'&&j==2){
                cout<<"1";
                j=1;
            }
            else if(a[i]=='1'&&j==0){
                cout<<"1";
                j=2;
            }
            else if(a[i]=='1'&&j==1){
                cout<<"1";
                j=2;
            }
            else if(a[i]=='1'&&j==2){
                cout<<"0";
                j=1;
            }
        }
        cout<<endl;
    }



    return 0;
}
