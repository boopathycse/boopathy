#include <stdio.h>
 
int main() {
int a,b,i,c=0,n;
printf("enter the two numbers");
scanf("%d%d",&a,&b);
for(i=0;i<a;i++)
{
n=b*i;
if(n==a)
{
	c=1;
}
}
if(c==1)
printf("yes");
else
printf("no");
 
	return 0;
}
