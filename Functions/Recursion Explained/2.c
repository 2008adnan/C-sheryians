#include<stdio.h>

void natnum(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    natnum(n);
    return 0;
}

void natnum(int n){
    if(n==0)
        return;   
    natnum(n-1);
    printf("%d ",n);
    
    
}