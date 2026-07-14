#include<stdio.h>
int fun(int);  //step 1 - Function Declaration (Prototype)..

int main(){
    int num = 10;
    printf("before fxn call %d\n", num);
    printf("fxn call %d\n", fun(num));  //function call 
    printf("after fxn call %d\n", num);
    return 0;
}

//step 2 - Function Definition/implementation
int fun(int a){
    a = 100;
    return a;    
}

