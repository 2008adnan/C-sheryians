#include <stdio.h>
int main(){
    float s1,s2,s3,s4;
    printf("enter you marks of all the four subjects:");
    scanf("%f", &s1);
    scanf(" %f", &s2);
    scanf(" %f", &s3);
    scanf(" %f", &s4);
    float per = (s1+s2+s3+s4)/4;
    char g;
    if(per<35){
        g = 'F';
    }else if(per<45){
        g = 'E';
    }else if(per<60){
        g = 'D';
    }else if(per<75){
        g = 'C';
    }else if(per<90){
        g = 'B';
    }else{
        g = 'A';
    }
    printf("Percentage = %.2f%% , Grade: %c",per, g);
    return 0;
}