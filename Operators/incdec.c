#include <stdio.h>
int main() {
    int a = 5;
    printf("%d\n", a++); // prints 5, then increments a to 6
    printf("%d\n", ++a); // increments a to 7, then prints 7
    printf("%d\n", a--); // prints 7, then decrements a to 6
    printf("%d\n", --a); // decrements a to 5, then prints 5
    return 0;
}