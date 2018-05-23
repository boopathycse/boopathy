#include <stdio.h>
 
int main()
{
	int a,b[100],i,j;
	printf("enter the no of elements");
	scanf("%d",&a);
	printf("enter the elements");
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(j=0;j<a;j++)
	{
		printf("\n%d\t%d",b[j],j);
	}
	return 0;
}
 
