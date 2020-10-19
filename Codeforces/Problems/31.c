#include<stdio.h>

int main(){
    int i,j=0,k=1,n,b;
    int c[100],a[100];

    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&c[i]);
    }
    for(i=0;i<n;i++){
        if(c[i]>c[i+1]){
            k++;
            a[j]=k;
        }
        else{
            a[j]=k;
            j++;
            k=1;
        }
        printf("\t%d ",a[j]);
    }

    return 0;
}
