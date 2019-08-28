#include <stdio.h>

int main()
{
    int s,n;
    printf("Print all natural numbers from 1 to : ");
    scanf("%d", &n);
    s=1;
    while(s<=n)
    {
        printf("%d\n",s);
        s++;
    }

    return 0;
}
