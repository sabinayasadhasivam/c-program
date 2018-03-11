#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int n,a,i;
	scanf("%s",&s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		a=i+1;
		if(a%2==1)
		{
			printf("%c",s[i]);
		}
	}
	printf(" ");
	for(i=0;i<n;i++)
	{
		a=i+1;
		if(a%2==0)
		{
			printf("%c",s[i]);
		}
	}
	return 0;
}
	
