#include <stdio.h>

int main()
{
	int k,i;
	char a[25];
	scanf("%d",&k);
	scanf("%s",a);
	for(i=0;i<k;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
