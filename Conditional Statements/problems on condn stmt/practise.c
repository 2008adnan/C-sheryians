//check if two numbers are equal or not
#include <stdio.h>

/*void program1(){
    float a;
    float b;
    printf("enter two numbers:");
    scanf("%f %f",&a,&b);
    if(a==b){
        printf("the numbers are equal");
    }
    else{
        printf("the numbers are not equal");
    }
}*/

//take two numbers from user and print the greatest number among them

/*void program2(){
    float a;
    float b;
    printf("enter two numbers:");
    scanf("%f %f",&a,&b);
    if(a>b){
        printf("the greater number is %f",a);
    }else if(b>a){
        printf("the greater number is %f",b);
    }else{
        printf("both numbers are equal");
    }
}*/

//check if a user has passed of failed

/*void program3(){
    float m;
    printf("enter your marks:");
    scanf("%f", &m);
    if(m<0 || m>100){
        printf("Invalid response! enter number between 0 and 100");
    }else if(m>=33){
        printf("congrats! you have passed\n");
    }else{
        printf("try again next time\n");
    }
}*/

//take a number from user and check if it is even or odd

/*void program4(){
    int a;
    printf("enter a number:");
    scanf("%d", &a);
    int rem = a%2;
    if(rem==0){
        printf("the number is even");
    }else{
        printf("the number is odd");
    }
}*/

//take three numbers from check each if it is positive, negative or zero

/*void program5(){
    float a,b,c;
    printf("enter three numbers:");
    scanf("%f %f %f",&a,&b,&c);
    if(a<0){
        printf("a is -ve\n");
    }else if(a>0){
        printf("a is +ve\n");
    }else{
        printf("a is zero\n");
    }
    if(b<0){
        printf("b is -ve\n");
    }else if(b>0){
        printf("b is +ve\n");
    }else{
        printf("b is zero\n");
    }
    if(c<0){
        printf("c is -ve\n");
    }else if(c>0){
        printf("c is +ve\n");
    }else{
        printf("c is zero\n");
    }
}*/

//take name and age of user as input and check if he/she is an eligible voter

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
