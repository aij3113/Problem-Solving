#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int i,k=0,l=0,t=0,d=0,r=0;
    long long int j,s;

    scanf("%lld",&s);
    j=s;
    while(j!=0)
    {
        r=j%10;
        j=j/10;
        d=d+r*pow(2,t);
        t++;
    }

    while(l<d)
    {
        l=pow(4,k);
        if(l<d)
            k++;
    }

    printf("%d\n",k);

    return 0;
}
