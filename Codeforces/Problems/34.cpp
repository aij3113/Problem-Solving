#include<bits/stdc++.h>

using namespace std;

int main(){
    long int n,i,j=1,m=1;
    cin>>n;

    long long int a[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=1;i<n;i++){
        if(a[i]>=a[i-1]){
            j=j+1;
        }
        else{
            if(j>m){
                m=j;
            }
            j=1;
        }
    }

    if(j>m){
            m=j;
        }


    cout<<m<<endl;

    return 0;
}
