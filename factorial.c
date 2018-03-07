#include <stdio.h>
 int main()
{
  int a, b, c = 1;
 
  printf("Enter a number\n");
  scanf("%d", &b);
 
  for (a = 1; a <= b; a++)
    c = c * a;
 
  printf("Factorial of %d = %d\n", b, c);
 
  return 0;
}
