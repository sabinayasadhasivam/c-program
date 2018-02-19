#include <stdio.h>
int main()
{
	int largest,a[40],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		a[0]=largest;
		if(a[i]>largest)
		largest=a[i];
	}
	printf("%d",largest);
	return 0;
}
