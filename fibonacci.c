#include<stdio.h>
int main()
{
int e;
printf("\nenter the limit for this series");
scanf("%d",&e);
int a=0,b=1;
printf("\e%d\t%d",a,b);
int t;
for(int i=0;i<e;i++)
{
t=a+b;
a=b;
b=t;

printf("\t%d\t",b);
}
return 0;
}
