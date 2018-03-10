#include <stdio.h>
int main() 
{
 int a[10];
 int i;
 int great;
 printf("Enter ten values:");
 
for (i = 0; i < 10; i++) 
{
  scanf("%d", &a[i]);
 }
 great = a[0];

 for (i = 0; i < 10; i++) 
{
  if (a[i] > great) 
{
   great = a[i];
  }
 }
 
printf("\nGreatest of ten numbers is %d", great);
 return 0;
}
