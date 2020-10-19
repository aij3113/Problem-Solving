#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int cz=0,co=0,x;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                cz+=1;
            }
            else{
                co+=1;
            }
        }

        if(co>=cz){
            x=cz;
        }
        else{
            x=co;
        }

        if(x%2==0){
            cout<<"NET"<<endl;
        }
        else{
            cout<<"DA"<<endl;
        }
    }

    return 0;
}
