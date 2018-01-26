#include <stdio.h>
int main()
{
	int v,i,sum=0;
	scanf("%d",&v);
	for(i=1;i<=v;i++)
	{
		printf("%d",i);
	sum=sum+i;
	}
	printf("\n%d",sum/v);
	return 0;
        
}
