#include<stdio.h>
int main()
{
int i,a,b,c,flag=0;
scanf("%d%d",&a,&b);
c=a*b;
for(i=1;i<=c;i++)
{
if(c==i*i);
flag=1;
}
if(flag==1)
{
printf("yes it is a prefect6 square");
}
else
{
printf("it is not aprefect squqre");
}
return 0;
}
