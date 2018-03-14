#include<stdio.h>
int main()
{
	int n,a[50],i,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		f=f+a[i];
		
	}
	printf("%d",f);
	return 0;
}
