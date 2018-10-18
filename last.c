#include<stdio.h>
int main()
{
char a[100];
int b,i;
gets(a);
b=strlen(a);
a[b]='.';
for(i=0;i<=b;i++)
printf("%c",a[i]);
return 0;
}
