#include<stdio.h>
int main(){
    int n;
    printf("enter a number n:");
    scanf("%d",&n);
    int sum=0;
    for(int i = 1;i<=n;i++){
        sum += i;
    }
    float avg = (float)sum/n;
    printf("Sum = %d Avg = %.1f", sum,avg);
    return 0;
}