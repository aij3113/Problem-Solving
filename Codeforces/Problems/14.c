#include<stdio.h>
#include<string.h>

int main()
{
    int a,i,x=0;
    char ax[50];

    scanf("%d",&a);

    for(i=0;i<a+1;i++)
        scanf("%c",&ax[i]);

    for(i=1;i<a;i++)
    {
        if(ax[i]==ax[i+1])
            x+=1;
    }

    printf("%d",x);

    return 0;
}
