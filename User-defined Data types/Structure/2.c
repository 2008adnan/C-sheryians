#include<stdio.h>
#include<string.h>
int main(){
    struct Student{
        char name[25];
        int rollno;
    };
    struct Student s1;
    strcpy(s1.name, "GOlu" );
    s1.rollno = 1;    
    /*       
    struct Student s2 = {"Bholu",2}; //initialising along with declaration
    */

    
    //what if we don't want to follow the sequence then :-
    struct Student s2 = {.rollno = 2, .name = "Polu"};
    printf("Name = %s roll no = %d\n", s1.name,s1.rollno);
    printf("Name = %s roll no = %d\n", s2.name,s2.rollno);
    return 0;
}