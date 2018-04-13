#include <stdio.h>

int main()
{
	int min,hour,minu;
	printf("enter the minutes");
	scanf("%d",&min);
	hour=min/60;
	minu=min%60;
	printf("hour=%d",hour);
	printf("minutes=%d",minu);
	return 0;
}
