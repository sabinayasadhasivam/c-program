#include<stdio.h>
#include<string.h>
int main()
{
	int n,b;
	char a[50];
	scanf("%s",&a);
	n=strlen(a);
	b=n/2;
	if(n%2!=0)
	{
		a[b]='*';
		printf("%s",a);
	}
	else
	{
		a[b]='*';
		a[b-1]='*';
		printf("%s",a);
	}
	return 0;
}
