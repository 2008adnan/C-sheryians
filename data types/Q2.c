//take length and breadth as input and print area of rectangle
#include <stdio.h>
int main(){
    int l = 30;
    int b = 15;
    int perimeter = 2*(l+b);
    int area = l*b;

    printf("the area of rectangle is %i\n",area);
    printf("the perimeter of rectangle is %i\n",perimeter);

    printf("area is %i\n",l*b);
    printf("perimeter is %i\n", 2*(l+b));


    return 0;
}