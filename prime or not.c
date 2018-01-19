#include<stdio.h>
int main()
{
int i,n,flag=0;
printf("enter the number:",n);
scanf("%d",&n);
for(i=2;i<=n;i++)
{
if(n%i==0)
{
	flag=1;
	break;
}
}
if(flag==0)
{
printf("%d is not a prime number",n);
}
else
{
printf("%d is prime number",n);
}
return 0;
}
