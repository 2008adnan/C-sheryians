#include <stdio.h>
int main(){
    int s1,s2,s3,s4;
    printf("enter you marks of all the four subjects:");
    scanf("%d", &s1);
    scanf(" %d", &s2);
    scanf(" %d", &s3);
    scanf(" %d", &s4);
    int per = (s1+s2+s3+s4)/4;
    printf("Percentage = %d %%" , per);
}