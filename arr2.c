#include <stdio.h>
#define MAX_SIZE 100
int sum(int arr[], int start, int len);

int main()
{
    int arr[MAX_SIZE];
    int n,i,s;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    } 
    s= sum(arr,0,n);
    printf("Sum of array elements: %d",s);
    return 0;
}
int sum(int arr[], int start, int len) 
{
    if(start >= len)
        return 0;
        return (arr[start] + sum(arr, start + 1, len));
}
