#include <stdio.h>
int main()
{
int a,b,i,flag=0;
printf("enter the intervals");
scanf("%d%d",&a,&b);
while(a<b)
{
for(i=2;i<a/2;i++)
{
if(a/i==0)
{
flag=1;
break;
}
if(flag==0&&(a/2!=0))
{
printf("%d",a);
}
}
}
return 0;
}
