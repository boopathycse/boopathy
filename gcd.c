#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    while(a!=b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    printf("the greatest number that divides by both is = %d",a);
    return 0;
}
