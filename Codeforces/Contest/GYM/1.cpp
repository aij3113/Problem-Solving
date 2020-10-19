#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,i,j,k,cmin=10000,loc;

    cin>>n>>m;

    string s,t;
    cin>>s>>t;

    for(i=0;i<=m-n;i++){
        k=0;
        for(j=0;j<n;j++){
            if(s[j]!=t[j+i]){
                k+=1;
            }
        }
        if(k<cmin){
            cmin=k;
            loc=i;
        }
    }

    cout<<cmin<<endl;
    for(i=0;i<n;i++){
        if(s[i]!=t[i+loc]){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;

    return 0;
}
