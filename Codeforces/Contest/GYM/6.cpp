#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin>>t;

    while(t--){
        long long int n,k,i,j;
        cin>>n>>k;

        for(i=2;i<=n;i++){
            if(n%i==0){
                n+=i;
                k=k-1;
                break;
            }
        }

        n=n+(k*2);

        cout<<n<<endl;
    }

    return 0;
}
