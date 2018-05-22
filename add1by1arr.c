#include<stdio.h>
int main()
{
int a[100],b,i=0,j,k;
printf("enter how many numbers");
scanf("%d",&b);
printf("enter the numbers");
for(k=0;k<b;k++)
{
	scanf("%d",&a[k]);
}
printf("%d",a[0]);
	for(j=1;j<b;j++)
{
		a[i]+=a[j];
    printf("\t);
	printf("%d\t",a[i]);
 
}
return 0;
 
}
