#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,h,i,j;
    cin>>n>>h;
    int a[n];
    j=n;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>h){
            j+=1;;
        }
    }

    cout<<j<<endl;


    return 0;
}
