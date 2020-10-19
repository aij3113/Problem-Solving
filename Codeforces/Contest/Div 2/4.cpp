#include<iostream>

using namespace std;

int main(){
    int n,m,oct;
    long int sum;
    int a[100];

    cin>>m;
    for(int j=1;j<=m;j++){
        oct=0;
        sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
            if(a[i]==0){
                oct=oct+1;
            }
        }

        if(sum!=0&&oct==0){
            cout<<0<<endl;
        }
        else if(sum==0&&oct==0){
            cout<<1<<endl;
        }
        else if((sum==0||(sum+oct)!=0)&&oct!=0){
            cout<<oct<<endl;
            }
        else if((sum+oct)==0){
            cout<<oct+1<<endl;
        }
    }

    return 0;
}
