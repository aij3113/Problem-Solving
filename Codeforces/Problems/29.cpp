#include<stdio.h>

int main(){
    int a,i;

    scanf("%d",&a);

    if((a>5)&&(a%5!=0))
        i=(a/5)+1;
    else if((a>5)&&(a%5==0))
        i=a/5;
    else
        i=1;

    printf("%d\n",i);

    return 0;
}
