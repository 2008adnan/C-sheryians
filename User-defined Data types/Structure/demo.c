#include <stdio.h>
int main(){
    //structure definition
    struct Student{
        char name[50];
        int age;
        float grade;
    };
    //declaring structure variable
    struct Student s1,s2;

    //method2 - declare variable with structure definition
    struct StudentData{
        char name[50];
        int age;
        float grade;
    }s1,s2; 

    
    return 0;
}