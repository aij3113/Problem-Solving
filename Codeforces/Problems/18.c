#include<stdio.h>

int main()
{
    int a,a1=0,a2=0,a3=0,a4=0,b,i=0,j,k,l,ax[100000];

    scanf("%d",&a);
    while(i<a)
    {
        scanf("%d",&ax[i]);
        i++;
    }
    for(i=0;i<a;i++)
     {
         if(ax[i]==1)
            a1+=1;
         else if(ax[i]==2)
            a2+=1;
         else if(ax[i]==3)
            a3+=1;
        else if(ax[i]==4)
            a4+=1;
     }

     if(a1!=0&&a1>=a3)
     {
         a1=a1-a3;
         if(a2%2==0)
          {
             a2=a2/2;
             if(a1>0&&a1<=4)
                a1=1;
             else if(a1>4)
             {
                 if(a1%4==0)
                    a1=a1/4;
                 else
                    a1=(a1/4)+1;
             }
          }
         else if(a2%2!=0)
         {
             a2=(a2/2)+1;
             if(a1>0&&a1<=2)
                a1=0;
             else if(a1>2&&a1<=4)
                a1=1;
            else if(a1>4)
            {
                a1=a1-2;
                if(a1>0&&a1<=4)
                    a1=1;
                else if(a1>4)
                    a1=(a1/4)+1;
            }
         }
     }

     else if(a3!=0&&a3>a1)
     {
         a3=a3;
         a1=0;
         if(a2%2==0)
            a2=a2/2;
        else if(a2%2!=0)
            a2=(a2/2)+1;
     }

     else if(a1==0&&a3==0)
     {
         if(a2%2==0)
            a2=a2/2;
         else if(a2%2!=0)
            a2=(a2/2)+1;
     }
     printf("%d %d %d %d\n",a1,a2,a3,a4);

    j=a1+a2+a3+a4;
    printf("%d\n",j);


    return 0;
}
