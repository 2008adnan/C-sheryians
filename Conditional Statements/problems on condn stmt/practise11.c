//write a program that takes movie rating as input and tells its status
#include <stdio.h>
int main(){
    float rating;
    printf("enter your rating for movie:");
    scanf("%f", &rating);
    if(rating>= 0 && rating<=2){
        printf("Flop");
    }else if(rating>2 && rating<=3.5){
        printf("Semi-hit");
    }else if(rating>3.5 && rating<=4.5){
        printf("Hit");
    }else if(rating>4.5 && rating<=5){
        printf("SuperHit");
    }else{
        printf("Enter Valid Rating");
    }
    return 0;
}