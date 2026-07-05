#include<stdio.h>
int main(){
    printf("to find a to the power of b enter number a and b:");
    int a,b;
    scanf("%d %d",&a,&b);
    int pow = 1;
    for(int i = 1;i<=b;i++){
        pow *= a;
    }
    printf("a to the power of b is: %d",pow);
    return 0;
}