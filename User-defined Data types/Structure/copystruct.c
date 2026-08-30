#include<stdio.h>
#include<string.h>
#pragma pack(1)  //disabling padding 
int main(){
    struct Student{
        char name[25];  //1 character = 1 byte i.e. this is 25 bytes
        int rollno;  //4 bytes for an integer
        //toh ek structure ka size uske sum of all type of variables defined hota par 
        //wo humesh aisa nhi ho skta sometimes it can be greater bcz wo size le leta for padding (+3 bytes)
    }s1,s2;
    strcpy(s1.name, "GOlu" );
    s1.rollno = 1;           
    s2=s1; // copying s1 data into s2 
    //direct copy
    s2.rollno = 5; //pass by value s2 mein s1 ki sari values copy hoke aayi toh agr hum s2 ke roll no mein change kr rhe hai toh wo s1 mein changes nhi krega 
    printf("Name = %s roll no = %d\n", s1.name,s1.rollno);
    printf("Name = %s roll no = %d\n", s2.name,s2.rollno);
    printf("Size = %lu\n", sizeof(s1));
    return 0;
}