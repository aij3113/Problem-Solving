#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;


int main(){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int ar[n+5],arr[n+5],ans[n+5];
        vector<int>s[n+5],ss[n+5];

        for(int i=0;i<n;i++){
            cin>>ar[i];
            ans[i]=0;
        }
        ans[n]=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            s[ar[i]].push_back(arr[i]);
        }
        for(int i=1;i<=n;i++){
            sort(s[i].begin(),s[i].end(), greater<int>());
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<s[i].size();j++){
                cout<<s[i][j]<<" ";
            }
            cout<<endl;
        }

        for(int i=1;i<=n;i++){
            ss[i].push_back(s[i][0]);
            for(int j=1;j<s[i].size();j++){
                ss[j].push_back(ss[i][j-1]+s[i][j]);
            }
        }

        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}

