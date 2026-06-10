//take three numbers from check each if it is positive, negative or zero
#include <stdio.h>
void program5(){
    float a,b,c;
    printf("enter three numbers:");
    scanf("%f %f %f",&a,&b,&c);
    if(a<0){
        printf("a is -ve\n");
    }else if(a>0){
        printf("a is +ve\n");
    }else{
        printf("a is zero\n");
    }
    if(b<0){
        printf("b is -ve\n");
    }else if(b>0){
        printf("b is +ve\n");
    }else{
        printf("b is zero\n");
    }
    if(c<0){
        printf("c is -ve\n");
    }else if(c>0){
        printf("c is +ve\n");
    }else{
        printf("c is zero\n");
    }
}
int main(){
    program5();
    return 0;
}