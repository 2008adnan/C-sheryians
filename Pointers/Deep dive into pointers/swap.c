#include <stdio.h>

void swap(int *, int *);
int main(){
    int a =10;
    int b=20;
    printf("a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("after calling swapping fxn\n"); //
    printf("a=%d and b=%d\n",a,b);

    return 0;
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
