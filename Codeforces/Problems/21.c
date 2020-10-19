#include<stdio.h>

int main()
{
    int k,n,w,i,j=0;

    scanf("%d %d %d",&k,&n,&w);

    for(i=1;i<=w;i++)
    {
        j=j+(i*k);
    }
    if(j>n)
        printf("%d\n",j-n);
    else
        printf("0\n");

    return 0;
}
