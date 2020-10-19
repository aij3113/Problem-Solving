#include<stdio.h>

int main(){
    long long int n,j;
    int i=0;
    scanf("%lld",&n);
    while(n!=0){
        j=n%10;
        if(j==4||j==7)
           i++;
        n=n/10;
    }
    if(i==7||i==4)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
