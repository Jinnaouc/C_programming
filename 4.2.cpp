#include<stdio.h>
#include<string.h>
int main()
{
    char a[80],b[80];
    int i=0;
    int n=0;
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]>='A' && b[i]<='Z')
        {
            b[i]=b[i]+32;
        }
    }
    n=strcmp(a,b);
    if(n==0)
    {
        printf("%c\n",'=');
    }
    else
    {
        if(n<0)
            printf("%c\n",'<');
        else
            printf("%c\n",'>');
    }
    return 0;
}