#include<stdio.h>
#include<math.h>

int main()
{
    int ax[5][5],b,c,i,j,k;

    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
        scanf("%d",&ax[i][j]);

    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    {
        if(ax[i][j]==1)
        {
            b=i+1;
            c=j+1;
        }
    }

    k=abs(3-b)+abs(3-c);

    printf("%d",k);

    return 0;
}
