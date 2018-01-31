#include<stdio.h>
int main()
{
	int hrs1,hrs2,mins1,mins2,a,b;
	scanf("%d:%d",&hrs1,&mins1);
	scanf("%d:%d",&hrs2,&mins2);
	a=hrs1-hrs2;
	b=mins1-mins2;
	printf("result is %d:%d",a,b);
	return 0;
}
