#include <stdio.h>

int main()
{
    long long n;
    int count = 0;
    printf("Enter any number: ");
    scanf("%lld", &n);
    while(n != 0)
    {
        count++;
        n /= 10;
    }

    printf("Total digits: %d", count);

    return 0;
}
