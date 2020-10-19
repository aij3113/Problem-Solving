#include<stdio.h>

int main()
{
    int i,n,ax[100][3],bx[3];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&ax[i][0],&ax[i][1],&ax[i][2]);
    }
    bx[0]=ax[0][0];
    bx[1]=ax[0][1];
    bx[2]=ax[0][2];

    for(i=1;i<n;i++)
    {
        bx[0]=bx[0]+ax[i][0];
        bx[1]=bx[1]+ax[i][1];
        bx[2]=bx[2]+ax[i][2];
    }

    if(bx[0]==0&&bx[1]==0&&bx[2]==0)
        printf("YES\n");
    else
        printf("NO\n");


    return 0;
}
