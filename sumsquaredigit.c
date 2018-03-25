#include <stdio.h>
 int main()
{
	int a,b,c,d,e,f;
	printf("enter the digit");
	scaanf("%d",&a);
	b=a/10;
	c=a%10;
	d=b*b;
	e=c*c;
	f=d+e;
	printf("the sum of square of digits is=",f);
	return 0;
}
