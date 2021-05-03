#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);



int main(){
    int t;
    cin>>t;

    while(t--){
        int n,i,j,k,fl,x=-3,x1,y=-1,y1;
        cin>>n;

        string st[n+3];

        for(i=0;i<n;i++){
            cin>>st[i];
        }

        fl=0;
        for(i=0;i<n;i++){
            k=0;
            for(j=0;j<n;j++){
                if(st[i][j]=='*'){
                    if(x==-3){
                        x=j;
                        x1=i;
                        k+=1;
                    }
                    else{
                        y=j;
                        y1=i;
                        k+=1;
                    }
                }
            }
            if(k==2){
                st[(i+1)%n][x]='*';
                st[(i+1)%n][y]='*';
                fl=1;
                break;
            }
        }
        if(fl!=1){
            if(x==y){
                st[x1][(x+1)%n]='*';
                st[y1][(y+1)%n]='*';
            }
            else{
                st[x1][y]='*';
                st[y1][x]='*';
            }
        }
        for(i=0;i<n;i++){
            cout<<st[i]<<endl;
        }


    }


    return 0;
}

