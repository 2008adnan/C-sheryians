#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    //outer loop for number of rows
    for(int i=1;i<=n;i++){
        //inner loop for spaces
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        //inner loop for stars
            for(int j=1;j<=i;j++){
            printf("* ");  
        }
        printf("\n");
    }
    return 0;
}