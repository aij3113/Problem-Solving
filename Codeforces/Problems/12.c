#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,i;
    char ax[1000];

    gets(ax);

    if(islower(ax[0])!=0)
    ax[0]=toupper(ax[0]);

    puts(ax);


    return 0;
}
