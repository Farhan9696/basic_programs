#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number ");
    scanf("%d", &n);
    if((n % 5 == 0) && (n % 11 == 0))
    {
        printf("Is divisible by 5 and 11");
    }
    else
    {
        printf("Not divisible by 5 and 11");
    }

    return 0;
}
