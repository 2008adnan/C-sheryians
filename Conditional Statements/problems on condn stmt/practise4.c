//take a number from user and check if it is even or odd
#include <stdio.h>
void program4(){
    int a;
    printf("enter a number:");
    scanf("%d", &a);
    int rem = a%2;
    if(rem==0){
        printf("the number is even");
    }else{
        printf("the number is odd");
    }
}
int main(){
    program4();
    return 0;
}