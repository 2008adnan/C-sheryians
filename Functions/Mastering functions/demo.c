#include<stdio.h>
int sumfun(int a,int b){
    return a+b;
}

int main(){
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    int ans=sumfun(x,y);
    printf("Sum is:%d",ans); //we can also write printf("Sum is:%d",sumfun(x,y)); instead of using ans variable.
    return 0;
}