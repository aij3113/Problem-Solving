#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        long long int n,i,j,x,position;
        vector<long long int>a;
        vector<long long int>b;

        cin>>n;

        for(i=0;i<n;i++){
            cin>>x;
            a.push_back(x);
        }

        for(i=0;i<n;i++){
            cin>>x;
            b.push_back(x);
            if(a[i]<=b[i]){
                position=i;
            }
        }




    }

    return 0;
}

