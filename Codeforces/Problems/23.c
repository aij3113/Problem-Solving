#include<stdio.h>
#include<string.h>

int main(){
    char A[100];
    int n,i,j=0;

    scanf("%s",A);
    n=strlen(A);

    for(i=0;i<n;i++){
        if(A[i]=='H'||A[i]=='Q'||A[i]=='9'){
            j=1;
            break;
        }
    }

    if(j==1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
