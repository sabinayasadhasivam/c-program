#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("largest number is a");
}
else if(b>a&&b>c)
{
printf("largest number is b");
}
else
{
printf("largest numbsr is c");
}
return 0;
}
