#include<stdio.h>
void main()
{
int s,b;
scanf("%d",&s);
 while(s>=60)
{
b++;
s=s-60;
}
printf("%d %d",b,s);
}
