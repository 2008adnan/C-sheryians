#include<stdio.h>
#include<string.h>
struct Student{
        char name[25];
        int rollno;
    }s1,s2;
void display(struct Student *s){
    printf("Name = %s roll no = %d\n", s->name,s->rollno);
}

int main(){

    strcpy(s1.name, "GOlu" );
    s1.rollno = 1;           
    strcpy(s2.name, "BhOlu" );
    s2.rollno = 2;            
    // printf("Name = %s roll no = %d\n", s1.name,s1.rollno);
    // printf("Name = %s roll no = %d\n", s2.name,s2.rollno);

    display(&s1);
    return 0;
}