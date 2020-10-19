#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        string s;
        long long int res=0,init,i,cur;
        bool ok;

        cin>>s;
        for(init=0;;init++){
            cur=init;
            ok=true;

            for(i=0;i<s.size();i++){
                res=res+1;
                if(s[i]=='+'){
                    cur+=1;
                }
                else{
                    cur-=1;
                }
                if(cur<0){
                    ok=false;
                    break;
                }
            }
            if(ok){
                break;
            }
        }
        cout<<res<<endl;
    }

    return 0;
}
