#include <stdio.h>
int main() 
{
    int i ,k;
    scanf("%d%d",&i,&k);
    printf(" %d %d ", i, k);
    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("\n%d\n%d ", i, k);
    return 0;
    
}
