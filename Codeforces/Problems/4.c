#include<stdio.h>

int main()
{
    int a,b,i,j,k=0,ax[50];

    scanf("%d %d",&a,&b);

    for(i=0;i<a;i++)
        scanf("%d",&ax[i]);

   j=ax[b-1];

   {
    for(i=0;i<a;i++)
    {
        if(ax[i]>0&&ax[i]>=j)
            k+=1;
    }
   }
    printf("%d\n",k);

   return 0;

}
