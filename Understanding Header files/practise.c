#include <stdio.h>
#include <math.h>
int main(){
    char name[100];
    printf("enter the name of student:");
    scanf("%s",name);
    printf("enter marks obtained in maths:");
    float m;
    scanf("%f",&m);
    printf("enter marks obtained in physics:");
    float p;
    scanf("%f",&p);
    printf("enter marks obtained in chemistry:");
    float c;
    scanf("%f",&c);
    float total = m+p+c;
    float per = (total/300)*100;
    printf("the total marks obtained is %.2f\n",total);
    printf("the percentage obtained is %.2f\n",per);
    return 0;
}
