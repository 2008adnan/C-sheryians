#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int f =0;
    int s=1;
    for(int i =1; i<=n;i++){
        printf("%d ",f);
        int next = f+s;
        f=s;
        s=next;
    }
    return 0;
}