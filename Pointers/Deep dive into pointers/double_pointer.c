#include <stdio.h>
int main(){
    int a=10;
    int *ptr = &a;
    int **ptr2 = &ptr;
    printf("%d\n", **ptr2); 
    printf("%p\n", ptr2);
    **ptr2 = **ptr2 + 5;
    printf("%d\n", **ptr2);
    (**ptr2)++;
    printf("%d\n", **ptr2);
    return 0;
}