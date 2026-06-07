//take principal, rate of interest and time from user and calculate coumpound interest
#include <stdio.h>
#include <math.h>
int main()
{
    float p,r,t;
    printf("enter principal, rate of interest, time(years): ");
    scanf("%f %f %f", &p,&r,&t);
    float a = p*pow((1+r/100),t);
    printf("amount after %f years is: %.2f\n", t, a);
    float ci = a-p;
    printf("compound interest is: %.2f\n", ci);
    
    return 0;
}