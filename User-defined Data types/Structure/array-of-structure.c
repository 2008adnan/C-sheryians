#include<stdio.h>
#include<string.h>
struct Student{
        char name[25];
        int rollno;
    };
void display(struct Student s){
    printf("Name = %s roll no = %d\n", s.name,s.rollno);
}

int main(){
    struct Student arr[3];
    for(int i=0;i<3;i++){
        printf("Enter name of student %d\n", i+1);
        scanf("%s", arr[i].name);
        printf("Enter roll no. of student %d\n", i+1);
        scanf("%d", &arr[i].rollno);
    }
    for(int i=0;i<3;i++){
        display(arr[i]);
    }
    
    return 0;
}