#include<iostream>
#include<math.h>

using namespace std;

int oo(){
    int n;
    int s[1000],S[1000],c[1000],j=0,r;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i]>>S[i];
        c[j]=fabs(s[i]-S[i]);
        j++;
    }
    r=c[0];
    for(int i=1;i<n;i++){
        if(r>c[i]){
            r=c[i];
        }
    }

    return r;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<oo()<<endl;
    }

    return 0;
}
