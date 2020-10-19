#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[3],i,j=0,r;

    for(i=0;i<3;i++){
        cin>>a[i];
        if(a[i]==1){
            j+=1;
        }
    }

    if(j==1){
        if(a[0]==1){
        r=a[2]*(a[1]+a[0]);
        }
        else if(a[1]==1){
            if(a[0]>=a[2])
                r=a[0]*(a[1]+a[2]);
            else
                r=a[2]*(a[1]+a[0]);
        }
        else if(a[2]==1){
            r=a[0]*(a[1]+a[2]);
        }
    }
    else if(j==2){
            if(a[1]==a[0]){
                r=a[2]*(a[1]+a[0]);
            }
            else if(a[1]==a[2]){
                r=a[0]*(a[1]+a[2]);
            }
            else
                r=a[0]+a[1]+a[2];
    }
    else if(j==3){
        r=a[0]+a[1]+a[2];
    }
    else{
        r=a[0]*a[1]*a[2];
    }

    cout<<r<<endl;



    return 0;
}
