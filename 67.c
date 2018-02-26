#include<stdio.h>
int main()
{
	int n,t;
	scanf("%d",&n);
    if(n%10==0)
    {
    printf("%d",n);
    }
    else
    {
    	t=n/10;
    	printf("%d",(t+1)*10);
    	
    }
    return 0;
    
}
