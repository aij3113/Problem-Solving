#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int a,b=0,i,j,k,l,m;
    char ax[4]="X++",bx[4]="--X",cx[4],dx[4]="++X",ex[4]="X--";

    scanf("%d",&a);

    for(i=0;i<=a;i++)
    {
        gets(cx);

        j=strcmpi(cx,ax);
        if(j==0)
            b=b+1;
        k=strcmpi(cx,bx);
        if(k==0)
            b=b-1;
        l=strcmpi(cx,dx);
        if(l==0)
            b=b+1;
        m=strcmpi(cx,ex);
        if(m==0)
            b=b-1;
    }
    printf("%d\n",b);

    return 0;
}
