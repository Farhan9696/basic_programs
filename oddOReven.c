#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number");
    scanf("%d", &n);
    if(number % 2 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);
    return 0;
}
