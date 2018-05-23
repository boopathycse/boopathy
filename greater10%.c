#include<stdio.h>
int main()
{
	int a,b,i;
	printf("enter the number");
	scanf("%d",&a);
	for(i=a;i>=a;i++)
	{
		b=i%10;
		if(b==0)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
	
}
