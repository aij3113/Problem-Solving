#include<bits/stdc++.h>

using namespace std;
vector<long long int>p(10000000);
map<long long int,bool>a;

void sieve(long long int n){
    for(long long int  i=4;i<=n;i+=2)
        p[i]=1;

    for(long long int i=3;i*i<=n;i+=2){
        if(p[i]==0){
            for(long long int j=i*i;j<=n;j+=i){
                p[j]=1;
            }
        }
    }

    for(long long int i=2;i<=n;i++){
        if(p[i]==0){
            a[p[i]]=1;
        }
    }
}

int main(){
    long long int n,i,j,c;

    cin>>n;
    sieve(n);

    c=n;
    while(n!=1){
        if(a[n]==1){
            c=c+1;
            n=1;
        }
        else{
            if(n%2==0){
                n=n/2;
                c=c+n;
            }
            else if(n%3==0){
                n=n/3;
                c=c+n;
            }
            else if(n%5==0){
                n=n/5;
                c=c+n;
            }
            else if(n%7==0){
                n=n/7;
                c=c+n;
            }
        }
    }

    cout<<c<<endl;

    return 0;
}
