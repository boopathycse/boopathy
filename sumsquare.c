#include<stdio.h>
#include<math.h>
int main()
{
 int a,b=0,c,d;
 printf("Enter the number");
 scanf("%d",&a);
 d=a;
 do
 {
      c=d%10;
      b=b+pow(c,2);
      d=d/10;
 }
 while(d%10!=0);
 printf("%d",b);
 return 0;
}
