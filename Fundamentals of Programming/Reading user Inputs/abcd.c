#include <stdio.h>
int main() {
    char name[100];
    int age;
    printf("name: ");
    scanf("%s", name);
    printf("age: ");
    scanf("%d",&age);
    float grade;
    printf("grade: ");
    scanf("%f",&grade);
    printf("\"%s\" is %d years old and scored %.3f\n",name,age,grade);
    return 0;
}