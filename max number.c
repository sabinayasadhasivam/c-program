#include<stdio.h>
int main()
{
int i,j,a[50],c,n;
scanf("%d",&n);
printf("enter the array values");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[i]<a[j])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
}
printf(" descending order");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
printf("max among number is:%d",a[0]);
return 0;
}
