#include<iostream>
#include<string>


using namespace std;

void prt(int n,int k){
    int i,j;
    char str[100000];

    for(i=0;i<n-2;i++)
        str[i]='a';
    str[n-2]='b';
    str[n-1]='b';



}

int main(){
    int t,n,k;

    cin>>t;

    while(t!=0){
        cin>>n>>k;

        prt(n,k);
        t=t-1;
    }

    return 0;
}
