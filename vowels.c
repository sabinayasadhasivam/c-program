#include<stdio.h>
int main()
{
char n;
scanf("%c",&n);
printf("%c", n );
if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
{
printf("/n is an vowel");
}
else
{
printf("it is constant");
}
return 0;
}
