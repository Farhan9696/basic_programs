#include <stdio.h>

int main()
{
    int yr;
    printf("Enter any year: ");
    scanf("%d", &yr);
    (yr%4==0) ? printf("LEAP YEAR") : printf("Not LEAP YEAR");

    return 0;
}
