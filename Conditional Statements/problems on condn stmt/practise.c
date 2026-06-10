//check if two numbers are equal or not
#include <stdio.h>

void program1(){
    float a;
    float b;
    printf("enter two numbers:");
    scanf("%f %f",&a,&b);
    if(a==b){
        printf("the numbers are equal");
    }
    else{
        printf("the numbers are not equal");
    }
}
int main(){
    program1();
    return 0;
}

