#include<stdio.h>
#include<string.h>
int main()
{
    char n[20];
    int a,i;
    scanf("%s",&n);
    a=strlen(n);
    for(i=0;i<a;i++)
    {
        if(n[i]%2==1)
        {
            printf("\t%c",n[i]);
        }
    }
    return 0;
}
