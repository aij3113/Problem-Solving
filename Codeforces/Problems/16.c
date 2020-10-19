#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,i,j,k;
    int ax[1000][2];

    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&ax[i][j]);
        }
    }

    b=ax[0][1];
    c=b;
    for(i=1;i<a;i++)
    {

        k=b-ax[i][0]+ax[i][1];
        if(k>c)
            c=k;

        b=k;
    }

    printf("%d\n",c);

    return 0;
}
