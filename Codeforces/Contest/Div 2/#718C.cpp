#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;

int arr[503][503]={0};

int main(){
    fastio;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i][i];
    }

    for(int i=0;i<n;i++){
        int x,y;
        x=i;y=i;
        for(int j=0;j<(arr[i][i]-1);j++){

            if((y-1)>=0 && arr[x][y-1]==0){
                arr[x][y-1]=arr[i][i];
                y-=1;

            }
            else if(arr[x+1][y]==0){
                arr[x+1][y]=arr[i][i];
                x+=1;

            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
