#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int u=0,l=0;

    cin>>s;

    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            u=u+1;
        }
        else{
            l+=1;
        }
    }

    if(l>=u){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }

    cout<<s<<endl;




    return 0;
}
