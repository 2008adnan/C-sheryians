#include<stdio.h>

void hello(int);

int main(){
    int n;
    printf("Enter the number of times you want to print Hello, World!: ");
    scanf("%d",&n);
    hello(n);
    return 0;
}

void hello(int n){
    if(n==0)
        return;

    //kaam
    printf("Hello, World!\n");
    //call
    hello(n-1);
}