#include<stdio.h>
#include<string.h>

int main(){
    char s[100],t[100];
    int i,j,k=0;

    scanf("%s",s);
    scanf("%s",t);

    for(i=0,j=strlen(t)-1;i<strlen(s),j>=0;i++,j--){
        if(s[i]!=t[j]){
            k=1;
            break;
        }
    }
    if(k==1)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}
