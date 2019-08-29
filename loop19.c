#include <stdio.h>

int main()
{
    int a, b, c, i, terms;
    a = 0;
    b = 1;
    c = 0;
    printf("Enter Number \n");
    scanf("%d",&terms);
    for(i=1; i<=terms; i++)
    {
        printf("%d \n ", c);
        a = b;   
        b = c;     
        c = a + b; 
    }
    return 0;
}
