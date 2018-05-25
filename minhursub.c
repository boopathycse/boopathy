#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	e=a*60;
	f=c*60;
	g=b+e;
	h=f+d;
	i=g-h;
	j=i/60;
	k=i%60;
	printf("%d\t%d",j,k);
	return 0;
	
}
