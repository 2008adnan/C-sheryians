#include<stdio.h>
int main(){
    int a,b;
    printf("Enter your first number:");
    scanf("%d",&a);
    printf("Enter your second number:");
    scanf("%d",&b);
    char op;
    printf("Enter operation(+,-,*,/) you want to perform:");
    scanf(" %c",&op);
    switch (op)
    {
    case '+':
        printf("The sum is %d",a+b);
        break;
    case '-':
        printf("The difference is %d",a-b);
        break;
    case '*':
        printf("The product is %d",a*b);
        break;
    case '/':
        printf("The quotient is %d",a/b);
        break;
    default:printf("Invalid resonse received");
        break;
    }
    return 0;
}