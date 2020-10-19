#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c=0,i,j;
    char ax[100];

    gets(ax);
    a=strlen(ax);

    for(i=0;i<a-1;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(ax[i]>ax[j])
                {
                    b=ax[i];
                    ax[i]=ax[j];
                    ax[j]=b;
                }
        }
    }

    for(i=0;i<a;i++)
    {
        if(ax[i]!=ax[i+1])
            c+=1;
    }

    if(c%2!=0)
        printf("IGNORE HIM!\n");

    else printf("CHAT WITH HER!\n");

    return 0;
}
