#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,m,i,op=0;

    cin>>n>>m;

    long long int a[m];

    cin>>a[0];
    op+=(a[0]-1);

    for(i=1;i<m;i++){
        cin>>a[i];
        if(a[i]>=a[i-1]){
            op+=(a[i]-a[i-1]);
        }
        else{
            op=op+(n-a[i-1])+a[i];
        }
    }

    cout<<op<<endl;

    return 0;
}
