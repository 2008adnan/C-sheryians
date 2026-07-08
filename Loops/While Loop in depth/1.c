#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    while(n!=0){
        int lastdigit = n%10;
        printf("%d ",lastdigit);
        n=n/10;
        sum = sum + lastdigit;
        
    }
    printf("\nSum of digits: %d",sum);
    return 0;
}