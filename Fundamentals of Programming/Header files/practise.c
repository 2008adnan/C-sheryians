#include <stdio.h>
#include <math.h>
/*float m,p,c;
char name[100];
void program1(){
    printf("enter the name of student:");
    scanf("%s",name);
    printf("enter marks obtained in maths:");
    scanf(" %f",&m);
}
void program2(){
    printf("enter marks obtained in physics:");    
    scanf(" %f",&p);
    printf("enter marks obtained in chemistry:");    
    scanf(" %f",&c);
    float total = m+p+c;
    float per = (total/300)*100;
    printf("the name of student is %s\n",name);
    printf("the total marks obtained is %.2f\n",total);
    printf("the percentage obtained is %.2f\n",per);
}
void program3(){
    int dig;
    printf("enter a 2 digit number:");
    scanf("%i",&dig);
    int fd ;
    fd = dig/10;
    int sd ;
    sd = dig%10;
    int rev = (sd*10)+fd;
    printf("the first digit is %d\n",fd);
    printf("the second digit is %d\n",sd);
    printf("the reverse of the number is %d\n",rev);

}
void program4(){
    int dig;
    printf("enter a 3 digit number:");
    scanf("%d",&dig);
    int fd,sd,td;
    printf("first digit: %d\n", fd = dig/100);
    printf("second digit: %d\n", sd = (dig/10)%10);
    printf("third digit: %d\n", td = dig%10);
    printf("the reverse is: %d\n", (td*100)+(sd*10)+fd);
}*/
void program5(){
    int t;
    printf("enter time in seconds to convert:");
    scanf("%d",&t);
    int h;
    h = t/3600;
    int m = (t%3600)/60;
    int s = t%60;
    printf("the converted time is %d hours %d minutes %d seconds", h,m,s);
}
void program6(){

}
int main(){
   program5();
    return 0;
}