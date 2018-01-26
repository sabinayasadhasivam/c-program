#include<stdio.h>

void main() 
{
 int l,s,te;
 printf("Enter the two number:");
scanf("%d %d",&l,&s);
te=l;
l=s;
s=te;
printf("The swapping of two numbers are:%d %d",l,s);

}
