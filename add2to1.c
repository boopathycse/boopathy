#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the two numebrs");
	scanf("%d%d",&a,&b);
	if(a%2==0)
	{
		if(b%2==0)
		{
			b=a+b;
			printf("the number is%d %d",a,b);
		}
	}
	else if(a%2||b%2!=0)
	 {
	 	printf("the numebr is%d %d",a,b);
	}
	return 0;
}
