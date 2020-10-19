#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i,j;
    string s;

    cin>>s;

    while(s.size()!=0){
        if(s[0]=='.'){
            s.erase(s.begin()+0);
            cout<<'0';
        }
        else if(s[0]=='-'&&s[1]=='.'){
            s.erase(s.begin()+0);
            s.erase(s.begin()+0);
            cout<<'1';
        }
        else if(s[0]=='-'&&s[1]=='-'){
            s.erase(s.begin()+0);
            s.erase(s.begin()+0);
            cout<<'2';
        }
    }
    cout<<endl;


    return 0;

}
