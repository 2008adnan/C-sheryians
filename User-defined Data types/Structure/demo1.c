#include<stdio.h>
#include <string.h>

struct User{
        char name[50];
        int age;
    };

    void DIsplay(struct User s){
        printf("Name: %s, Age: %d\n", s.name, s.age);
    }

    void DIsplayPointer(struct User *s){
        printf("Name: %s, Age: %d\n", s->name, s->age);
    }

int main(){
    struct User s1;
    strcpy(s1.name, "Golu");
    s1.age = 25;
    struct User s2 = {"Polu", 30};
    struct User s3;
    s3 = s1; // Copying structure s1 to s3
    strcpy(s3.name, "Raju"); // Changing name of s3

    DIsplay(s1);
    DIsplay(s2);
    DIsplay(s3);

    DIsplayPointer(&s1);
    DIsplayPointer(&s2);
    DIsplayPointer(&s3);
    printf("Size of structure User: %lu bytes\n", sizeof(s1));

    return 0;
}