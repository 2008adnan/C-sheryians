#include <stdio.h>
int main() {
    int a = 10;
    int *ptr = &a;
    printf("%p\n", ptr); //address of the pointer
    printf("%u\n", ptr); //numeric value of the pointer
    printf("%p\n",&a);
    printf("%d\n", *ptr); //value at address of the pointer

    *ptr = *ptr+5; //incrementing the value at the address of the pointer
    printf("%d\n", *ptr); //value at address of the pointer after increment
    (*ptr)++;
    printf("%d\n", *ptr);
    return 0;
}