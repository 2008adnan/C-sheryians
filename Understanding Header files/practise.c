#include <stdio.h>
#include <math.h>
float m,p,c;
char name[100];
void program1(){
    printf("enter the name of student:");
    scanf("%s",name);
    printf("enter marks obtained in maths:");
    scanf(" %f",&m);
}
void program2(){
    printf("enter marks obtained in physics:");    
    scanf(" %f",&p);
    printf("enter marks obtained in chemistry:");    
    scanf(" %f",&c);
}
int main(){
    program1();
    program2();
    float total = m+p+c;
    float per = (total/300)*100;
    printf("the name of student is %s\n",name);
    printf("the total marks obtained is %.2f\n",total);
    printf("the percentage obtained is %.2f\n",per);
    return 0;
}