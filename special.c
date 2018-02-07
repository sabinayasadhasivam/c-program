#include<stdio.h>
#include<string.h>
int main()
{
	int i,count=0;
	char a[50];
	for(i=0;i<100;i++)
	{
		scanf("%s",&a[i]);
	}
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>='a' && a[i]<='z'|| a[i]>='A' && a[i]<='Z' || a[i]>='0' && a[i]<='9')
		count=count;
		else
		count=++count;
	}
	printf("%d",count);
	return 0;
}
