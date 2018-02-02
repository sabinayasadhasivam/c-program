#include<stdio.h>
int main()
{
	 char a[25]="hello  word";
	 int i,count=0;
	 for(i=0;a[i]!=0;i++)
	 {
	 	if(a[i]==' ' )
	 	count=++count;
	 	else
	 	count=count;
	 }
	 printf("%d space ",count);
	 return 0;
}
