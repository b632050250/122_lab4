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
            if(a[i]==b[j])
            {
                printf("%c",b[j]);
            }
        }
    }
    return 0;
}

