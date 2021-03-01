#include<stdio.h>
int main()
{
    int a,i,j,k,n,m,p,max=0,min=0,x,y;
    scanf("%d",&a);
    int b[a];
    for(n=0; n<a; n++)
    {
        scanf("%d %d %d",&i,&j,&k);
        m=(i*4)+(j*2)+k;
        b[n]=m;
    }
    for(n=0; n<(a-2); n++)
    {
        p=b[n]+b[n+1]+b[n+2];
        if(n==0)
        {
            max=p;
            min=p;
        }
        else
        {
            if(max<p)
            {
                max=p;
                x=n;
            }
            if(min>p)
            {
                min=p;
                y=n;
            }
        }
    }
    printf("%d %d",x+1,y+1);
    return 0;
}
