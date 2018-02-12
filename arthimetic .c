#include <stdio.h>
int main()
{
	int i, sum=0,a,n,d;
	scanf("%d",&n);
	scanf("%d",&a);	
	printf("%d is the starting value\n",a);
	scanf("%d",&d);
	printf("%d is the difference\n",d);
	for(i=0;i<n;i++)
	{
		sum=sum+a;
		a=a+d;
	}
	printf("%d",sum);
	return 0;

}
