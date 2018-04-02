#include <stdio.h>
 
int main() {
	int a,b,c,d=0,i;
	printf("enter the number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b=i/10;
		c=i%10;
		if(b==2)
		   d++;
		   if(c==2)
            d++;
 
	}
	printf("the number of occurances 2 is%d",d);
 
	return 0;
}
