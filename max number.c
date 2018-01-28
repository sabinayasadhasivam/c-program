#include<stdio.h>
int main()
{
int i,j,h[50],c,num;
scanf("%d",&num);
printf("enter the array values");
for(i=0;i<=num;i++)
{
scanf("%d",&h[i]);
}
for(i=0;i<=num;i++)
{
for(j=i+1;j<=num;j++)
{
if(h[i]<h[j])
{
c=h[i];
h[i]=h[j];
h[j]=c;
}
}
}
printf(" descending order");
for(i=0;i<num;i++)
{
printf("%d\n",h[i]);
}
printf("max among number is:%d",h[0]);
return 0;
}
