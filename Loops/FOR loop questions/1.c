#include<stdio.h>
int main(){
    int n;
    printf("Enter number upto which you hv to print:");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
        printf("%d ",i);
    }
    return 0;
}