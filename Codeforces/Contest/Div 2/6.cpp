#include<iostream>
#include<math.h>
#include<string>
#include<string.h>



using namespace std;



int main(){
    int t,a,b,c,al,ct;

    cin>>t;
    for(int i=1;i<=t;i++){
            ct=0;
        cin>>a>>b>>c;
        al=a+b+c;
        if(al==0)
            cout<<ct<<endl;
        else if((a==0&&b==0&&c==1)||(a==1&&b==0&&c==0)||(a==0&&b==1&&c==0)){
            ct=1;
            cout<<ct<<endl;
        }
        else if((a==0&&b==1&&c==1)||(a==1&&b==0&&c==1)||(a==1&&b==1&&c==0)){
            ct=2;
            cout<<ct<<endl;
        }
        else if(a==1&&b==1&&c==1){
            ct=3;
            cout<<ct<<endl;
        }
        else{
            ct=ct+3;
            a--;
            b--;
            c--;
            if(a>0&&b>0&&c>0){
                ct=ct+3;
            }
        }

    }





    return 0;
}
