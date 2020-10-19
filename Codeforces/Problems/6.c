#include<stdio.h>

int main()
{
    int a,b,c=0,i,ax[3][1000];

    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d %d %d",&ax[0][i],&ax[1][i],&ax[2][i]);
        b=ax[0][i]+ax[1][i]+ax[2][i];
        if(b>=2)
            c+=1;
    }

    printf("%d\n",c);

    return 0;
}
