#include<stdio.h>
int main()
{
	int i,count=0;
	char a[100]="she is an angle";
	
	for(i=0;a[i]!=0;i++)                                                                                                                                                            
	{
		if(a[i]==' ')
		count=++count;
		
	}
	printf("number of word is %d",count+1);
	return 0;
}
