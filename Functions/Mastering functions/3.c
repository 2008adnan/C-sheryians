#include<stdio.h>
double add(int,double);  //step 1 - Function Declaration (Prototype)..
//isme humne a aur b nhi likha kyunki humne fxn declaration ke time sirf data type batana hai, variable name optional hai.

int main(){
    double result = add(5, 3.14);  // step 3 - Function Call
    printf("Result is:%.3f\n", result);
    return 0;
}

//step 2 - Function Definition/implementation
double add(int a,double b){
    return a+b;
}

