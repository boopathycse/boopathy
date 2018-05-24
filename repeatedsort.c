#include<stdio.h>
 
int main()
{
int a,b[100],i,j,k;
scanf("%d",&a);
for(i=0;i<a;i++)
{
	scanf("%d",&b[i]);
}
for(j=0;j<a;j++)
{
	for(k=j+1;k<a;k++)
	{
		if(b[j]==b[k])
	  	{
		    printf("%d\t",b[j]);
	  	}
		
	}
 
}
return 0;
}
