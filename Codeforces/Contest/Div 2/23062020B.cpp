#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;

    cin>>t;

    while(t--){
        long long int n,i,j;
        string s;

        cin>>n;
        cin>>s;

        if(n<2){
            cout<<s<<endl;
        }
        else{
        for(i=s.size()-2;i>=0;i--){
            if(s[i]=='1'&&s[i+1]=='0'&&(i+2)==s.size()){
                s.erase(s.begin()+(i));
            }
            else if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'){
                s.erase(s.begin()+(i+1));
                i=i+1;
            }
            else if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1'){
                s.erase(s.begin()+(i));
            }
        }

        cout<<s<<endl;
    }
    }


    return 0;
}

