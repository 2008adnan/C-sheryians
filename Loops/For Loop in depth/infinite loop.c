#include<stdio.h>
int main(){
    for( ; ; ){   //since no condition is specified it never becomes false and the loop goes till infinite
        printf("hehe\n");
        /*break;*/     //if we use this break here the programs stops immediately after working for one time 
    }
    return 0;
}