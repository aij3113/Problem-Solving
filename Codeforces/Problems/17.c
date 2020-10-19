#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k=0,l=0;
    char s[100];
    char s1[5]="hello";

    gets(s);
    j=strlen(s);

    for(i=0;i<j;i++)
    {
        if(s[i]==s1[k])
        {
            l++;
            k++;
        }
        if(l==5)
            break;
    }
    if(l==5)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
