//check if two numbers are equal or not
#include <stdio.h>
int main(){
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
    return 0;
}