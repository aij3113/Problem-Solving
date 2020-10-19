#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,i,j,k;

    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        scanf("%d %d %d",&b,&c,&d);
        scanf("%d %d",&e,&f);

        if(e<f)
        {
            if(b>=(2*(c+d)))
                k=(e*c)+(f*d);
            else if(b<(2*(c+d)))
                {
                    if(b>=2*d)
                    {
                        d=d;
                        b=b-(2*d);
                        c=b/2;
                        k=(e*c)+(f*d);
                    }
                    else if(b<(2*d))
                    {
                        d=b/2;
                        b=b-(2*d);
                        c=b/2;
                        k=(e*c)+(f*d);
                    }
                }
        }

        else if(e>f)
        {
            if(b>=(2*(c+d)))
                k=(e*c)+(f*d);
            else if(b<(2*(c+d)))
                {
                    if(b>=2*c)
                    {
                        c=c;
                        b=b-(2*c);
                        d=b/2;
                        k=(e*c)+(f*d);
                    }
                    else if(b<(2*c))
                    {
                        c=b/2;
                        b=b-(2*c);
                        d=b/2;
                        k=(e*c)+(f*d);
                    }
                }
        }

       else if(e=f)
        {
            if(b>=(2*(c+d)))
                k=(e*c)+(f*d);
            else if(b<(2*(c+d)))
                {
                    c=b/2;
                    b=b-(2*c);
                    d=b/2;
                    k=(e*c)+(f*d);
                }
        }

        printf("%d\n",k);

    }

    return 0;
}
