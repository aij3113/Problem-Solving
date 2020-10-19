#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,i,j,k;

    cin>>n;

    long long int a[n],b[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);

    j=0;
    k=n-1;

    for(i=0;i<n;i++){
        if(i%2==0){
            b[j]=a[i];
            j=j+1;
        }
        else{
            b[k]=a[i];
            k=k-1;
        }
    }

    for(i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;


    return 0;
}
