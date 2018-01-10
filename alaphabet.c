#include<stdio.h>
int main()
{
char c;
scanf("%c",&c);
printf("%c",c);
if((c>=65&&c<=90)||(c>=97&&c<=122))
{
printf("it is alaphabet");
}
else
{
printf("it is not alaphabet");
}
return 0;
}
