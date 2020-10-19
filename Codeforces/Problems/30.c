#include<stdio.h>

int main(){
    int a,b,c,d,e,f,i=0;

    scanf("%d",&a);
    a=a+1;
    while(i!=1){
        b=a;
        c=b%10;
        b=b/10;
        d=b%10;
        b=b/10;
        e=b%10;
        b=b/10;
        f=b%10;
        if(c!=d&&c!=e&&c!=f&&d!=e&&d!=f&&e!=f)
            i=1;
        else
            a++;
    }
    printf("%d\n",a);

    return 0;
}
