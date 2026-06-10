//take name and age of user as input and check if he/she is an eligible voter
#include <stdio.h>
void program6(){
    char name[100];
    int age;
    printf("enter you name:");
    scanf("%s", &name);
    printf("enter your age:");
    scanf("%d", &age);
    if(age>=18){
        printf("\"Hello %s, you are eligible to vote\" ", name);
    }else{
        printf("\"Hello %s, you will be eligible to vote in %d years\"",name,18-age);
    }
}
int main(){
    program6();
    return 0;
}
