//check if a user has passed of failed
#include <stdio.h>
void program3(){
    float m;
    printf("enter your marks:");
    scanf("%f", &m);
    if(m<0 || m>100){
        printf("Invalid response! enter number between 0 and 100");
    }else if(m>=33){
        printf("congrats! you have passed\n");
    }else{
        printf("try again next time\n");
    }
}
int main(){
    program3();
    return 0;
}