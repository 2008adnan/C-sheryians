#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    switch (age)
    {
    case 1 ... 3: //this case runs when age is between 1to3 including 1 and 3
        printf("You're a toddler");
        break;
    case 4 ... 6: //
        printf("You're a pre-schooler");
        break;
    case 7 ... 10: //
        printf("You're a child");
        break;
    case 18 ... 25: //
        printf("You're a young adult");
        break;
    case 26 ... 39: //
        printf("You're an adult");
        break;
    default:printf("option not found in dropdown");
        break;
    }
    return 0;
}