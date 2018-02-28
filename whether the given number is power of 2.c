#include<stdio.h>
#include<math.h>
int main()
{
int n=7,f=0,i;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
  if(pow(2,i)==n)
  {
  printf("yes");
    f=1;
}
}
if(f==0)
{
printf("no");
}
return 0;
}
