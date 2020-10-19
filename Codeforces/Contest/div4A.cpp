#include<bits/stdc++.h>

using namespace std;



int main(){
     int n;

    cin>>n;
    while(n!=0){
            int t,j,i=0,a[6],c=0;
            cin>>t;

    while(t!=0){
        a[i]=t%10;
        t=t/10;
        i=i+1;
    }
    for(j=0;j<i;j++){
        if(a[j]!=0)
            c+=1;
    }
    cout<<c<<endl;
    for(j=0;j<i;j++){
        if(a[j]!=0){
            cout<<a[j]*pow(10,j)<<" ";
        }
    }
    cout<<endl;
    n=n-1;
    }





    return 0;
}
