#include <stdio.h>
int main() {
    printf("%d\n", 2>3 || 4>3); //returns 1(true) because 4 is greater than 3
    printf("%d\n", 2>3 && 4>3); //returns 0(false) because 2 is not greater than 3
    printf("%d\n", !(2>3)); //returns 1(true) because 2 is not greater than 3
    return 0;
}