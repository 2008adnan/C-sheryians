#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    //outer loop for number of rows
    for(int i=1;i<=n;i++){
        //inner loop for stars
            for(int j=1;j<=n;j++){
                if(i==j || i+j ==(n+1)){
                    printf("*");  
                }else{
                    printf(" ");
                }
            }
        printf("\n");
    }
    return 0;
}