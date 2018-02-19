#include<stdio.h>
int main()
{
	int n,r,sum=0,c=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
		c++;
	}
	
	printf("%d",c);
	return 0;
}
