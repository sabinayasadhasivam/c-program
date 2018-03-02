#include<stdio.h>
#include<string.h>
int main()
{
	int i,c=0;
	char a[200];
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
{
	if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='O')||(a[i]=='U')||(a[i]=='I'))
             {
             c++;
             }
}
if(c==0)
{
	printf("it is not a vowel");
}
else
{
	printf("it is a vowel");
}
return 0;
}
