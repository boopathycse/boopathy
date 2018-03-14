#include <stdio.h>

#define MAX_SIZE 100   

int main()
{
    int arr[MAX_SIZE];
    int i, max, min, a;

    printf("Enter size of the array: ");
    scanf("%d", &a);

        printf("Enter elements in the array: ");
    for(i=0; i<a; i++)
    {
        scanf("%d", &arr[i]);
    }


        max = arr[0];
    min = arr[0];

   for(i=1; i<a; i++)
    {  
    if(arr[i] > max)
        {
            max = arr[i];
        }

     
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

     printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}
