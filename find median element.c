#include<stdio.h>
int main()
{
	int i,j,n,c,a[50],median;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				
				a[j]=c;
			}
		}
	}
	for(i=0;i<=n;i++)
	{
		printf("%d",a[i]);
	}
	if(n%2==0)
	{
		median=(a[n/2]+a[n/2+1])/2;
		printf("medaian element is :%f",median);
	}
	else
	{
		median=a[n/2+1];
		printf("median element is :%f",median);
	}
	return 0;
}
