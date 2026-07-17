#include<stdio.h>

int factorial(int);

int main(){
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    printf("factorial %d", factorial(n));
    return 0;
}    
int factorial(int n) {
    if (n == 0) {
        return 1; // Base case: factorial of 0 is 1
    }

        return n * factorial(n - 1); // Recursive case
    }