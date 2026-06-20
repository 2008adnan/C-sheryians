#include<stdio.h>
int main(){
    int day;
    printf("Enter day number:");
    scanf("%d",&day);

    switch (day){
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;  //agr ye break lagana bhul jao toh next wo sari statements chalti chali jati jbtk use break na mil jaye dubara aur isi ko "Fall-through" bolte
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        //example mene yha se break hta diya toh ab agr koi 5 dalega toh case 5 ke sath sath case 6 bhi chalega kyuki next break usi pe hai 
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;        
    default:printf("Wrong Input");
        break;
    }
    return 0;
}