#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s;
        int a=0,i;
        vector<int>v;
        cin>>s;

        for(i=0;i<s.size();i++){
            if(s[i]=='1'){
                a+=1;
            }
            else{
                if(a>0){
                    v.push_back(a);
                }
                a=0;
            }
        }
        if(a>0){
            v.push_back(a);
        }
        a=0;
        sort(v.begin(),v.end(),greater<int>());
        for(i=0;i<v.size();i+=2){
            a+=v[i];
        }
        cout<<a<<endl;
    }

    return 0;
}
