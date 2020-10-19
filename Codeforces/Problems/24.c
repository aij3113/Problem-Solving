#include<stdio.h>
#include<string.h>

int main(){
    char A[100];
    int i,j=1,k;

    scanf("%s",A);

    if(islower(A[0])!=0)
        k=0;
    else k=1;

    for(i=1;i<strlen(A);i++){
        if(isupper(A[i])==0){
            j=0;
            break;
        }
    }

    if(k==1&&j==1){
        for(i=0;i<strlen(A);i++){
         A[i]=tolower(A[i]);
        }
    }
    else if(k==0&&j==1){
        A[0]=toupper(A[0]);
        for(i=1;i<strlen(A);i++){
         A[i]=tolower(A[i]);
        }
    }

    printf("%s\n",A);

    return 0;
}
