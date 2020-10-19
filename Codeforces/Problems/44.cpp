#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map <string,int> value;
    long long int n,i,j,k;
    cin>>n;

    string a[n],b[n];

    cin>>a[0];
    b[0]=a[0];
    k=1;

    for(i=1;i<n;i++){
        cin>>a[i];
        int flag=1;
        for(j=0;j<k;j++){
            if(a[i]==b[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            b[k]=a[i];
            k+=1;
        }
    }

    for(i=0;i<k;i++){
        value[b[i]]=0;
    }

    for(i=0;i<n;i++){
        value[a[i]]+=1;

        if(value[a[i]]==1){
            cout<<"OK"<<endl;
        }
        else{
            cout<<a[i]<<value[a[i]]-1<<endl;
        }
    }


    return 0;
}
