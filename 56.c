#include<stdio.h>
#include<string.h>
int main()
{
	int a=0,b=0,i;
	char s[50];
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		a++;

	
		else if(s[i]>=0&&s[i]<=9)
		b++;
	
	}
	if(a!='0'&&b!='0')
	{
		printf("yes");
	}
	else
	{
		printf("no");
		
	}
	
	return 0;

	}
	
