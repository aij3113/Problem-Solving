#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int cx=0,cy=0,i,j,k,t,a,b,c;

    cin>>t;

    while(t--){
        cin>>a>>b>>c;

        if(a>=c){
            cx=-1;
            cy=b;
        }
        else if(a<=(c/b)){
            cy=-1;
            cx=1;
        }
        else if(a>(c/b)){
            cx=1;
            cy=b;
        }
        cout<<cx<<" "<<cy<<endl;
    }


    return 0;
}
