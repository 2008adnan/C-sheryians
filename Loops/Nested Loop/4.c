#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    //outer loop for number of rows
    for(int i=1;i<=n;i++){
        //inner loop for stars
            for(int j=1;j<=2*n-1;j++){
                if(i==j || i+j ==(2*n)){
                    printf("*");  
                }else{
                    printf(" ");
                }
            }
        printf("\n");
    }
    return 0;
}