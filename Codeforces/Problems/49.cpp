#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a=0,b,i,j;
    string s[10];

    j=0;
    for(i=0;i<8;i++){
        cin>>s[i];
        if(s[i]=="BBBBBBBB"){
            a+=1;
        }
        else if(j==0){
            for(int k=0;k<8;k++){
                if(s[i][k]=='B'){
                    a+=1;
                }
            }
            j=1;
        }
    }

    b=a;

    cout<<b<<endl;

    return 0;
}
