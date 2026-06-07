#include <stdio.h>
int main() {
    float a = 10,b=3;
    printf("%d\n",a<b); //returns 1 if a is less than b, otherwise returns 0
    printf("%d\n",a>b); //returns 1 if a is greater than b, otherwise returns 0
    printf("%d\n",a==b); //returns 1 if a is equal to b, otherwise returns 0
    printf("%d\n",a!=b); //returns 1 if a is not equal to b, otherwise returns 0
    printf("%d\n",a<=b); //returns 1 if a is less than or equal to b, otherwise returns 0
    printf("%d\n",a>=b); //returns 1 if a is greater than or equal to b, otherwise returns 0
    printf("%d\n",a%b); //returns the remainder of a divided by b
    return 0;
}