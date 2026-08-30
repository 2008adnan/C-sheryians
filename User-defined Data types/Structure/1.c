#include<stdio.h>
#include<string.h>
int main(){
    struct Student{
        char name[25];
        int rollno;
    }s1,s2;
    strcpy(s1.name, "GOlu" );//accessing structure member using dot operator
    s2.rollno = 1;           //accessing structure member using dot operator
    strcpy(s2.name, "BhOlu" );//accessing structure member using dot operator
    s2.rollno = 2;            //accessing structure member using dot operator
    printf("Name = %s roll no = %d\n", s1.name,s1.rollno);
    printf("Name = %s roll no = %d\n", s2.name,s2.rollno);
    return 0;
}