//take length and breadth as input and print area of rectangle
#include <stdio.h>
int main(){
    int l;
    int b;
    printf("enter length: ");
    scanf("%i",&l);
    printf("enter breadth: ");
    scanf("%i",&b);
    int perimeter = 2*(l+b);
    int area = l*b;

    printf("the area of rectangle is %i\n",area);
    printf("the perimeter of rectangle is %i\n",perimeter);




    return 0;
}