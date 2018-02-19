#include <stdio.h>
int main()
{
	int i,n,f=0,s=1,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		t=f+s;
		f=s;
		s=t;
	
		printf("%d\n",t);
	}
	return 0;
	}
