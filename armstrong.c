#include<stdio.h>
int main()
{
int n,r,sum=0,temp;
scanf("%d",&n);
temp=n;
while(temp!=0)
{
r=temp%10;
sum=sum+(r*r*r);
temp=temp/10;
}

if(sum==n)
{
printf("%d is armstrong number",n);
}
else
{
printf("%d is not a armstrong number",n);
}

return 0;
}
