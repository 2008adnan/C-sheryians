#include<stdio.h>
#include <string.h>

typedef struct User{
    char name[50];
    int age;
}St;
int main(){
    St s1;
    strcpy(s1.name, "GOlu");
    s1.age = 51;

    printf("Name: %s, Age: %d\n", s1.name, s1.age);
    return 0;
}