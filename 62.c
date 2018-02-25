#include <stdio.h>
#include<string.h>

int main()
{
	int i,n,count=0;
	char a[24];
	scanf("%s",&a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='1'||a[i]=='0')
		{
                       count++;
		}
		else
		{
			printf("not a binary representation");
			break;
		}
	}
	if(count==n)
{
	printf("it is a binary representation");
}	
return 0;
}
