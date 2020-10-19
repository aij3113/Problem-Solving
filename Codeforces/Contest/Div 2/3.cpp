#include<bits/stdc++.h>
#include<string.h>
#include<string>
using namespace std;

int main(){
    int n,i;
    long int j,k,l=0;

    cin>>n;
    for(i=0;i<n;i++){
        cin>>j;
        char *sum;
        sum=new char(10000);
        if(j%2==0){
            while(j!=0){
                j=j-2;
                sum[l++]='1';
            }
        }
        sum[l]='\0';
        cout<<sum<<endl;
        free(sum);
    }


    return 0;
}
