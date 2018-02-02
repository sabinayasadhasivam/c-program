#include <stdio.h>
int main()
{
	int i,r,sum=0,temp,a,b;
	//scanf("%d%d",&a,&b);
	for(i=100;i<999;i++)
	{
		temp=i; sum=0;
		while(temp!=0)
		{
			r=temp%10;
			sum=sum+r*r*r;
			temp=temp/10;
		}
			if(sum==i)
			{
				printf("%d\n",sum);
			}
		
	}
	return 0;
}
