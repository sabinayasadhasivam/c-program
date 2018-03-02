#include<stdio.h>
int main()
{
	int i, r,l,n,f=0;
	scanf("%d%d%d",&r,&l,&n);
	for(i=r;i<=l;i++)
	{
		if(i==n)
		f=1;
	}
	if(f==1)
	{
		printf("yes the given number is present");
	}
	else
	{
		printf("invalid number");
	}
	return 0;
 
 
}
