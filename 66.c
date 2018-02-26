#include <stdio.h>
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	for(i=2;i<n;i++)
{
	if(n%i==0)
	{
	count++;
		
	}	
}
if(count==0)
{
	printf("it is a prime number");
}
else
{
	printf("it is not a prime number");
}
return 0;
}
