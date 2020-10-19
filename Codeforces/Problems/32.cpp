#include<iostream>

using namespace std;

int main(){
    int a[100],n,i,j;

    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=1;i<=n;i++){
        for(j=0;j<n;j++){
            if(a[j]==i)
                cout<<j+1<<" ";
        }
    }

    return 0;
}
