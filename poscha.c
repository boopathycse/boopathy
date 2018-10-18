#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int b,i,temp;
gets(a);
b=strlen(a);
for(i=1;i<b;)
{
temp=a[i];
a[i]=a[i-1];
a[i-1]=temp;
i=i+2;
}
printf("%s",a);
}
