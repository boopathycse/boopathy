#include <stdio.h>
 
int main()
{
   int a, b, temp;
 
   printf("Enter two values\n");
   scanf("%d%d", &a, &b);
 
   temp =a;
    a = b;
    b = temp;
    printf("After Swapping\na = %d\nb = %d\n",a,b);
    return 0;
}
