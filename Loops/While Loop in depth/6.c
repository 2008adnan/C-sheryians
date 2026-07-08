#include<stdio.h> 
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n>0 || sum>9){
        if(n==0){
            n=sum;
            sum=0;
        }
        int last = n%10;
        sum += last;
        n/=10;
    }
    printf(sum==1?"Special Number\n":"Not a Special Number\n");

    return 0;
}