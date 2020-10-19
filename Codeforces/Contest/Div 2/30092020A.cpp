#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;
    while(t--){
        int n,i,j;
        map <char,int> m;
        map <char,int>::iterator itr;
        string s;

        cin>>n;

        for(i=0;i<n;i++){
            cin>>s;

            for(j=0;j<s.size();j++){
                m[s[j]]+=1;
            }
        }
        bool b= true;
        for(itr=m.begin();itr!=m.end();itr++){
            j=itr->second;
            if(j%n){
                b=false;
                break;
            }
        }

        if(b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
