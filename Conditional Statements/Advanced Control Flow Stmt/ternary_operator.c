#include <stdio.h>
int main(){
    int age = 17;
    if(age>=18){
        printf("Valid Voter\n");
    }else{
        printf("Invalid noter\n");
    }

    //syntax of ternary opertor-> condition ? value_if_true:value_if_false
    
    age>=18?printf("Valid voter"):printf("Invalid voter");

    return 0;
}