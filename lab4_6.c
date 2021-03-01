#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,m;
    char a[50],b[50],c[50],d[50],e[1000];
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    scanf("%s",d);
    for(i=0; i<strlen(a); i++)
    {
        for(j=0; j<strlen(b); j++)
        {
            if(a[i]==b[j] && a[i+1]==b[j+1])
            {
                for(k=0; k<strlen(c); k++)
                {
                if(b[j]==c[k] && b[j+1]==c[k+1])
                {
                    for(m=0; m<strlen(d); m++)
                    {
                    if(c[k]==d[m] && c[k+1]==d[m+1])
                        {
                            printf("%c",d[m]);
                        }
                    }
                }
                }
            }
        }
    }
    return 0;
}
