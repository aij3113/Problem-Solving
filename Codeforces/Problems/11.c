#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,i,j;
    char ax[100];

    gets(ax);
    a=strlen(ax);

    for(i=0;i<a;i++)
    {
        if(i%2==0)
        {
            for(j=i+2;j<a;j++)
            {
                if((j%2==0)&&(ax[i]>ax[j]))
                {
                    b=ax[i];
                    ax[i]=ax[j];
                    ax[j]=b;
                }
            }
        }
        else
            continue;
    }

    puts(ax);

    return 0;
}
