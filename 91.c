#include<stdio.h>
int main()
{
	int l,b,h,area,volume;
	printf("length");
	scanf("%d",&l);
	printf("breadth");
	scanf("%d",&b);
	printf("height");
	scanf("%d",&h);
	area=((l*b)+(b*h)+(l*h));
	volume=l*b*h;
	printf("\n%d area",area);
	printf("\n%d volume",volume);
	return 0;
}
