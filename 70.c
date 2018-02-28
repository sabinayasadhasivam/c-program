
#include<stdio.h>
#include<math.h>
int main()
{
	int f=0,i,n;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(pow(2,i)==n)
		{
			
			f=1;
		}
	}
	if(f==1)
	{
	printf("%d",n*2);
	}
	else
	{
		printf("the given number is not satisfied ");
	}
	return 0;
}
