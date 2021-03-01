#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i;
    scanf("%s",a);
    for(i=0; i<strlen(a); i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}
