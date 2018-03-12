#include <stdio.h>
#include<string.h>
int main()
{
	int i=0,j,n,flag=0;
	char a[50];
	scanf("%s",&a);
	n=strlen(a);
	j=n-1;
	while(j>1)
	{
		if(a[i++]!=a[j--])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("it is a palindrome");
	}
	else
	{
		printf("it is not a palindrome");
	}
	return 0;
}

