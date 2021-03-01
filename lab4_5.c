#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=1,m;
    char b[50];
    scanf("%d",&i);
    for(j=0; j<i; j++)
    {
        scanf("%s",b);
        for(m=0; m<strlen(b); m++)
        {
            if(b[m]=='A')
            {
                if(k==2)
                {
                    k=3;
                }
                else if(k==3)
                {
                    k=2;
                }
            }
            else if(b[m]=='B')
            {
                if(k==1)
                {
                    k=4;
                }
                else if(k==4)
                {
                    k=1;
                }
            }
            else if(b[m]=='C')
            {
                if(k==1)
                {
                    k=3;
                }
                else if(k==3)
                {
                    k=1;
                }
                else if(k==4)
                {
                    k=2;
                }
                else if(k==2)
                {
                    k=4;
                }
            }
            else if(b[m]=='D')
            {
                if(k==1)
                {
                    k=2;
                }
                else if(k==2)
                {
                    k=1;
                }
                else if(k==3)
                {
                    k=4;
                }
                else if(k==4)
                {
                    k=3;
                }
            }
            else if(b[m]=='E')
            {
                if(k==1)
                {
                    k=4;
                }
                else if(k==4)
                {
                    k=1;
                }
                else if(k==2)
                {
                    k=3;
                }
                else if(k==3)
                {
                    k=2;
                }
            }
        }
        printf("%d\n",k);
        k=1;
    }
    return 0;
}
