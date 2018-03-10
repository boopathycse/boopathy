#include<stdio.h>
 
int main()
{
   int n, a = 0, b= 1, c, x;
 
   printf("Enter the number of terms\n");
   scanf("%d",&n);
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   for ( x = 0 ; x < n ; x++ )
   {
      if ( x <= 1 )
         c = x;
      else
      {
         c = a + b;
         a = b;
         b = c;
      }
      printf("%d\n",c);
   }
 
   return 0;
}
