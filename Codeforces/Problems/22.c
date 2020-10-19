#include<stdio.h>

int main()
{
    int i,n,j,k,l,ax[100],bx[100];

    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ax[i]);

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(ax[i]<ax[j])
            {
                k=ax[i];
                ax[i]=ax[j];
                ax[j]=k;
            }

    for(i=0;i<n;i++)
     {
        k=1;
        for(j=i+1;j<n;j++)
        {
            if(ax[i]==ax[j])
                k++;
            else
            {
                i=j;
                break;
            }
        }

        if(k%2==0)
        {
            bx[l]=k;
            l++;
        }
     }

    j=bx[0];
    for(i=1;i<l;i++)
    {
        if(j>bx[i])
            j=bx[i];
    }

    if(j!=0)
        printf("%d\n",j);
    else
        printf("%d\n",n);


    return 0;
}
