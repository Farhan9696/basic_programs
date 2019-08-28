#include <stdio.h>
int main()
{
    int yr;
    printf("Enter a year ");
    scanf("%d",&yr);
     if (yr%4 == 0)
         printf(" Leap year");
         else
         printf("Not a Leap year");
   
    
    return 0;
}
