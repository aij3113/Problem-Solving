#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,i,j,l,flag,k=0;
    map<int,int>val;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;

    int a[n+1],b[n+1];

    memset(b, 1, sizeof(b));

    for(i=0;i<n;i++){
        cin>>a[i];
        flag=0;
        for(j=0;j<=k;j++){
            if(a[i]==b[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            b[k]=a[i];
            val[a[i]]=i;
            k+=1;
        }
    }

    i=0;
    flag=0;
    while(i<k){
        for(j=0;j<n;j++){
            if(j!=val[b[i]]){
                for(l=0;l<n;l++){
                     if(l!=j){
                        int x=a[j]+a[l];
                        if(b[i]==x){
                            cout<<val[b[i]]+1<<" "<<j+1<<" "<<l+1<<endl;
                            flag=1;
                            break;
                        }
                     }
                }
            }
            if(flag==1){
                break;
            }
        }

        if(flag==1){
            break;
        }
        else
            i++;
    }

    if(flag==0){
        cout<<"-1"<<endl;
    }


    return 0;
}
