#include <stdio.h>
 
int main()
{
    float p, r,si;
    int t;
 
    printf("Enter the values of principal_amt, rate and time \n");
    scanf("%f %f %d", &p, &r, &t);
    si = (p * r * t) / 100.0;
    printf("Amount = Rs. %5.2f\n", p);
    printf("Rate = Rs. %5.2f%\n", r);
    printf("Time = %d yrs\n", t);
    printf("Simple interest = %5.2f\n", si);
}
