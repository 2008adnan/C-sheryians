#include<stdio.h> 
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i = 1;i<=n/2;i++){
        if(n%i==0){
            sum += i;
        }
    }
    printf(sum==n?"Perfect Number\n":"Not a Perfect Number\n");

    return 0;
}