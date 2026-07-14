#include<stdio.h>

int sumfun(int a,int b);  //step 1 - Function Declaration (Prototype)...always declare the function before using it in main function.

int main(){
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    //step 3 - Function Call
    printf("Sum is:%d\n",sumfun(x,y)); 

    printf("Sum is:%d\n",sumfun(12,23)); //actual parameters or arguments (the ones written in parenthesis of function call)
    return 0;
}

//step 2 - Function Definition/implementation
int sumfun(int a,int b){  //formal parameters (the ones written in parenthesis of function definition)
    return a+b;
}