#include<stdio.h>
int main(){
    int n;
    printf("enter number of times output to be repeated:");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        printf("Hello\n");
    }

    return 0;
}