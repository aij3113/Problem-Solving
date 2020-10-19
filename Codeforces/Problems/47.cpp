#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a[3],b,c,ot;

    cin>>n;

    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);

    if(a[0]+a[1]==n){
        ot=2;
    }
    else if(n%a[0]==0){
        ot=n/a[0];
    }
    else{
        int flag=1,b=1;
        while(flag!=0){
            c=(n/a[0])-b;
            int x=(a[0]*c)+(b*a[1]);
            if(x=n){
                ot=c+b;
                flag=0;
            }
            else{
                b=b+1;
            }
        }
    }

    cout<<ot<<endl;


    return 0;
}
