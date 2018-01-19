
#include<stdio.h>
int main()
{
int a,b,i;
scanf("%d",&a);
scanf("%d",&b);
for(i=a;i<b;i++)
{
if(i%2==0)
{
printf("\n%d",i);
}
}
printf("these are even numbers");
return 0;
}
