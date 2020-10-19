#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,i,j,f=1;
    long long int s;

    cin>>s>>n;

    long long int x[n],y[n];

    for(i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(x[i]>x[j]){
                swap(x[i],x[j]);
                swap(y[i],y[j]);
            }
        }
    }

    for(i=0;i<n;i++){
        if(s>x[i]){
            s+=y[i];
        }
        else{
            f=0;
            break;
        }
    }

    if(f==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

    return 0;
}
