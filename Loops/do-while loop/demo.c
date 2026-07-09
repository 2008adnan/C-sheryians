#include<stdio.h>
int main(){
    char ch;
    do{
        printf("Shery\n");
        printf("Do you want to repeat (y/n):");
        scanf(" %c",&ch);
    }while(ch=='y'||ch=='Y');
    printf("Program exited\n");
    return 0;
}