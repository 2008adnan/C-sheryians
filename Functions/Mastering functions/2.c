#include<stdio.h>

int sumfun(int a,int b){
    return a+b;
}

int main(){
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    int ans=sumfun(x,y);
    printf("Sum is:%d\n",ans); //we can also write printf("Sum is:%d",sumfun(x,y)); instead of using ans variable.
    printf("%d\n",sumfun(13,20)); //we can also call the function directly in printf statement.
    return 0;
}


