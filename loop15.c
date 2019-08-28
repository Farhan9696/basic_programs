#include <stdio.h>
 
int main()
{
   int n, rev=0, t;
 
   printf("Enter a number\n");
   scanf("%d", &n);
   t = n;
   while (t != 0)
   {
      rev = rev * 10;
      rev = rev + t%10;
      t = t/10;
   }
   if (n == rev)
      printf("%d is a palindrome number.\n", n);
   else
      printf("%d isn't a palindrome number.\n", n);
 
   return 0;
}
