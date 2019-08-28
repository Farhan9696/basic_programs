#include <stdio.h>

int main()
{
    int i, n, sum=0;
    printf("Enter limit: ");
    scanf("%d", &n);
    for(i=2; i<=n; i+=2)
    {
        sum += i;
    }
    printf("Sum of Even numbers between 1 to %d=%d", n, sum);

    return 0;
}
