#include <stdio.h>
#include<math.h>
 
int main()
{
    float p, r,ci;
    int t;
 
    printf("Enter the values of principal_amt, rate and time \n");
    scanf("%f %f %d", &p, &r, &t);
    ci = p*(pow((1 + r / 100), t));
    printf("Amount = Rs. %.2f\n", p);
    printf("Rate = Rs. %.2f\n", r);
    printf("Time = %d yrs\n", t);
    printf("Compound interest = %5.2f\n", ci);
}
