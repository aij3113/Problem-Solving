#include<stdio.h>
#include<string.h>

int main()
{
    int a,i,j,k=0,l=0;
    char ax[100];

    gets(ax);
    a=strlen(ax);

    for(i=0;i<a;i++)
    {
        for(j=i+1;j<i+7;j++)
        {
            if(ax[i]!=ax[j])
            { l=1;
              break;
            }
            else l=0;
        }
        if(l==0)
            k=k+1;
    }
    if(k>0)
        printf("YES");
    else printf("NO");


    return 0;
}
