#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,i;
        cin>>n;
        int a[n],even=0,wevenp=0,odd=0,woddp=0;

        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                even+=1;
                if(i%2==1){
                    wevenp+=1;
                }
            }
            else{
                odd+=1;
                if(i%2==0){
                    woddp+=1;
                }
            }
        }

        //cout<<n<<"\t"<<even<<"\t"<<odd<<"\t"<<wevenp<<"\t"<<woddp<<endl;

        if(n%2==0&&(even==odd)){
            if(wevenp==woddp){
                cout<<(wevenp+woddp)/2<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
        else if(n%2==1&&(even=odd+1)){
            if(wevenp==woddp){
                cout<<(wevenp+woddp)/2<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
        else{
            cout<<"-1"<<endl;
        }
    }

    return 0;
}
