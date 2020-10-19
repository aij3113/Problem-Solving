#include<stdio.h>
#include<string.h>

int main(){
    char A[50];
    int n,t,i,j;

    scanf("%d %d",&n,&t);
    scanf("%s",A);
    for(i=0;i<t;i++){
        for(j=0;j<n-1;j++){
            if(A[j]=='B'&&A[j+1]=='G'){
              A[j]='G';
              A[j+1]='B';
              j++;
            }
        }
    }

    printf("%s\n",A);

    return 0;
}
