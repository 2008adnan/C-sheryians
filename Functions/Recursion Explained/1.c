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
    if(n==0){
        return;
    }
    else{
        printf("%d ",n);
        natnum(n-1);
    }
}