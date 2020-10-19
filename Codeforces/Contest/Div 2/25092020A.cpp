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
        int n,i,j,k;
        string s,a;

        cin>>n>>s;

        for(i=0;i<n;i++){
            if(i%2){
                a[i]='0';
            }
            else{
                a[i]='1';
            }
        }
        cout<<a<<endl;

    }



    return 0;
}
