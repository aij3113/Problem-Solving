#include<stdio.h>

int main()
{
    int a,b,c,ax[4],i=0,j=0,k=0;

    scanf("%d",&a);
    b=a;


    while(a!=0)
    {
        ax[i]=a%10;
        if(ax[i]==4||ax[i]==7)
            j=j;
        else
            j++;

        a=a/10;
        i++;
    }


    if(j==0||(b%4==0)||(b%7==0)||(b%44==0)||(b%47==0)||(b%74==0)||(b%77==0)||(b%444==0)||(b%447==0)||(b%474==0)||(b%477==0)||(b%744==0)||(b%747==0)||(b%774==0)||(b%777==0))
        printf("YES\n");
    else
        printf("NO\n");


    return 0;
}
