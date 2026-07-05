#include <stdio.h>
int main(){
    printf("enter number to find the factorial of: ");
    int n;
    scanf("%d", &n);
    int fac = 1;
    for(int i = n; i>=1;i--){
        fac = fac * i;
    }
    printf("factorial of %d is: %d", n, fac);
    return 0;
}