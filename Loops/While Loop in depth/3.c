#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int copy = n;
    int rev = 0;
    while(n!=0){
        int lastdigit = n%10;
        rev = rev * 10 + lastdigit;
        n=n/10;   
    }
    printf(rev==copy?"The number is a palindrome":"The number is not a palindrome");
    return 0;
}