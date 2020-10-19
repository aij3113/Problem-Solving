#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t!=0){
        long long int n,k,i=0,j=0;
        cin>>n>>k;

        if(n>k)
            cout<<k<<endl;
        else if(n==k)
            cout<<k+1<<endl;
        else{
            while(1){
                    i+=1;
                if((i%n)!=0){
                    j=j+1;
                    if(j==k)
                        break;
                }
            }

            cout<<i<<endl;
        }

        t=t-1;

    }


    return 0;
}
