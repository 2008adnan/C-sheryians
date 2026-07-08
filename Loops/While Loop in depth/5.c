#include<stdio.h> 
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum=0,fac=1;
    while(n>0){
        int last = n%10;
        for(int i=1;i<=last;i++){
            
            fac = fac*i;
        }
        sum += fac;
        fac = 1;
        n /= 10;
    }
    printf("Sum of factorials of digits: %d", sum);

    return 0;
}