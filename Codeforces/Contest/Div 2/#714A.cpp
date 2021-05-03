#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;


int main(){
    fastio;
    int t;
    cin>>t;

    while(t--){
        float n,k;
        cin>>n>>k;

        if(n<=(2.0*k)){
            cout<<"-1"<<endl;
            continue;
        }
        else{
            int i,j=2;
            int arr[101];
            for(i=0;i<n;i++){
                arr[i]=-1;
            }

            i=2;
            arr[0]=1;
            while(k--){
                arr[i]=j;
                i+=2;
                j+=1;
            }
            for(int i=0;i<n;i++){
                if(arr[i]==-1){
                    arr[i]=j;
                    j+=1;
                }
            }

            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}

