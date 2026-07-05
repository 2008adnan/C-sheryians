#include <stdio.h>
int main(){
    int n = 12;
    int sum =0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
        if(i!=n){
            printf("%d + ", i);
        }else{
            printf("%d = ", i);
        }
        sum += i;
    }   
    }
    printf("%d", sum);  
    return 0;
    }
    
