#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,i=0,j=0,k;
    char ax[100];

    gets(ax);
    k=strlen(ax);


    for(i=0;i<k;i++)
    {
        if(ax[i]=='A'||ax[i]=='a'||ax[i]=='E'||ax[i]=='e'||ax[i]=='I'||ax[i]=='i'||ax[i]=='O'||ax[i]=='o'||ax[i]=='U'||ax[i]=='u'||ax[i]=='Y'||ax[i]=='y')
            ax[i]=ax[i];
        else
            { if(islower(ax[i])!=0)
                printf(".%c",ax[i]);
              else
                printf(".%c",tolower(ax[i]));
            }
    }
    return 0;
}

