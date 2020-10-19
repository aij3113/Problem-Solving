#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,i,j;
    cin>>n;

    long long int l,a[n];
    double m,b[n+3];

    cin>>l;

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    b[0]=a[0]-0;
    m=(double)b[0];

    for(i=1;i<n;i++){
        b[i]=a[i]-a[i-1];
        if(m<b[i]){
            m=(double)b[i];
        }
    }

    b[n]=l-a[n-1];

    if(m<b[n]){
            m=(double)b[n];
        }

    m=m/2;

    if(m<b[0]||m<b[n]){
        if(b[0]>=b[n]){
            printf("%.10lf\n",b[0]);
        }
        else{
            printf("%.10lf\n",b[n]);
        }
    }
    else{
        printf("%.10lf\n",m);
    }


    return 0;
}
