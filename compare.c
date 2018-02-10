#include <stdio.h>
#include<string.h>
int main()
{
	char s[50]="coimbatore";
	char f[87]="karur";
	int a ,b;
	a=strlen(s);
	b=strlen(f);
	if(a>b)
	{
		printf("%s",s);
	}
	else 
	{
		printf("%s",f);
	}
	return 0;
}
