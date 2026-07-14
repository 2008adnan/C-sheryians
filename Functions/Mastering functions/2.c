#include<stdio.h>
void printhello();  //step 1 - Function Declaration (Prototype)...always declare the function before using it in main function.

int main(){
    printhello();  // step 3 - Function Call
    return 0;
}

//step 2 - Function Definition/implementation
void printhello(){
    for(int i=0;i<5;i++){
        printf("Hello\n");
    }
}

