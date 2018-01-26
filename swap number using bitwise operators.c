#include<stdio.h>

void main() 
{
 int j,s,te;
 printf("Enter the two number:");
scanf("%d %d",&j,&s);
j^=s;
s^=j;
j^=s;
printf("The swapping of two numbers are:%d %d",j,s);

}
