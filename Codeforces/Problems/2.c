#include<stdio.h>

int main()
{
    long long int a,b,c,d,e;

    scanf("%lld %lld %lld",&a,&b,&c);

    if(a%c==0)
        d=a/c;
    else
        d=(a/c)+1;

    if(b%c==0)
        e=b/c;
    else
        e=(b/c)+1;

    printf("%lld\n",d*e);
}
