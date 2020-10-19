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
        int n,i,j;
        string s,x;

        cin>>n>>s;

        if(s[n-1]=='0'){
            x=string(n,'0');
        }
        else{
            x=string(n,'1');
        }

        cout<<x<<endl;
    }


    return 0;
}
