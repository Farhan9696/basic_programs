#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, size;
    printf("Enter the size: ");
    scanf("%d", &size);
    printf("Enter array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nElements of array are: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }
   

    return 0;
}
