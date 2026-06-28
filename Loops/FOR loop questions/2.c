#include<stdio.h>
int main(){
    int n;
    printf("Enter number from where you hv to start print:");
    scanf("%d",&n);

    for(int i = n;i>=1;i--){
        printf("%d ",i);
    }
    return 0;
}