#include<stdio.h>
 
int main()
{
    int i, p, limit, n;
 
    printf("\nEnter Limit ");
    scanf("%d", &limit);
    printf("\nPrime numbers are \n\n",limit);
 
    for(n=1; n<limit; n++)
    {
        p = 1;
        for(i=2; i<n; i++)
            if(n%i == 0)
            {
                p= 0;
                break;
            }
        if(p)
            printf(" %d ",n);
    }
 
    printf("\n");
    return 0;
}
