#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i,n;
    printf("Array Size: ");
    scanf("%d",&n);
    printf("Enter Array Elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Negative Elements: ");
    for(i=0;i<n;i++)
  {
        if(arr[i] < 0)
        {
            printf("%d\t",arr[i]);
        }
    }

    return 0;
}
