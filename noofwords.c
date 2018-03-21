#include <stdio.h>
int main()
{
	char a[100];
	int l,i,word=1;
	clrscr();
	printf("\nEnter string ");
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]!=' ' && a[i+1]==' ')
			word=word+1;
	}
	printf("\nthere are %d words in the string",word);
	return 0;
}
