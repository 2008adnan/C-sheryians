#include<stdio.h>
void swap(int,int);  //step 1 - Function Declaration (Prototype)..

int main(){
    int x = 10, y = 20;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(x, y);  //Function call
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}

//step 2 - Function Definition/implementation
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap function: a = %d, b = %d\n", a, b);
}

