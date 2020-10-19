#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,b=0,bi,c=0,ci,n;
    cin>>n;

    int a[n];

    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            b=b+1;
            bi=i;
        }
        else{
            c=c+1;
            ci=i;
        }
    }

    if(b>c){
        cout<<ci+1<<endl;
    }
    else if(c>b){
        cout<<bi+1<<endl;
    }


    return 0;
}
