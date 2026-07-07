#include <stdio.h>
int main(){
    int n=5;
    int fac=1,sum=0;
    for(int j = 1;j<=n;j++){
        fac = 1;
        for(int i = j; i>=1;i--){
        fac = fac * i;                          
        }   
        if(j!=n){         
            printf("%d! + ", j);
        } else {
            printf("%d! = ", j);
        }
        sum += fac;
    }        
    
    printf("%d\n", sum);
    
    return 0;
    }
    
