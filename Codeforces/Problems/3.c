#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int a,i,j;
    char ax[100];

    scanf("%d",&a);

    for(i=0;i<=a;i++)
    {

     gets(ax);
     j=strlen(ax);
        if(j<=10)
            printf("%s\n",ax);
        else
            printf("%c%d%c\n",ax[0],(j-2),ax[j-1]);
    }

    return 0;
}

