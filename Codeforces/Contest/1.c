#include<stdio.h>

int main(){

    int i,t,a,b,c[5],j,n;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&n);
        c[0]=a;
        c[1]=b;
        if(n==0)
            printf("%d\n",c[0]);
        else if(n==1)
            printf("%d\n",c[1]);
        else
        {
            for(j=2;j<=n;j++)
            {
                c[2]=c[1]^c[0];
                c[0]=c[1];
                c[1]=c[2];
            }
            printf("%d\n",c[2]);
        }
    }

    return 0;
}
