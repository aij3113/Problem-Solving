#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int a,b,c=0,d=0,i,j;
    char ax[100],bx[100];

    gets(ax);
    gets(bx);

    a=strlen(ax);

    for(i=0;i<a;i++)
    {
        if(islower(ax[i])==0)
            ax[i]=tolower(ax[i]);
        if(islower(bx[i])==0)
            bx[i]=tolower(bx[i]);

        if(ax[i]>bx[i])
           {
             c=c+1;
             break;
           }
        else if(ax[i]<bx[i])
           {
             d=d+1;
             break;
           }
    }

    if(c==d)
        printf("0");
    else if(c>d)
        printf("1");
    else
        printf("-1");


    return 0;
}
