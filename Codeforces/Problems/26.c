#include<stdio.h>

int main(){
    int n,p,q,c=0,i;

    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&p,&q);
        if((q-p)>=2)
            c++;
    }
    printf("%d\n",c);

    return 0;
}
