#include<stdio.h> 
#include <math.h>

int main(){
    int n,c=0;
    int copy;
    printf("Enter a number: ");
    scanf("%d",&n);
    copy=n;
    while(n>0){
        c++;
        n=n/10;   
    }
    n=copy;
    int sum = 0;
    while(n>0){
        int lastdigit = n%10;
        int res =1;
        for(int i=1;i<=c;i++){
           res *= lastdigit; 
        }
        sum =sum + res;
        n /= 10;
    }
    printf("Sum of digits raised to the power of number of digits: %d",sum);
    return 0;
}