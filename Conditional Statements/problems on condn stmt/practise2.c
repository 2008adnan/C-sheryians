//take two numbers from user and print the greatest number among them
#include <stdio.h>
void program2(){
    float a;
    float b;
    printf("enter two numbers:");
    scanf("%f %f",&a,&b);
    if(a>b){
        printf("the greater number is %.2f",a);
    }else if(b>a){
        printf("the greater number is %.2f",b);
    }else{
        printf("both numbers are equal");
    }
}

int main(){
    program2();
    return 0;
}