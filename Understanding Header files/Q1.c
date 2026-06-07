//calculate the area of triangle using heron's formula
#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    printf("enter sides of triangle: ");
    scanf("%f %f %f", &a,&b,&c);
    float s = (a+b+c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle is: %.2f\n", area);
    return 0;
}