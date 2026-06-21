#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){ //it will repeat printing until 5 times
        printf("Hello\n");
        if(i==3)  //means jaise hi i=3 hoga turant program stop ho jayega mtlb ki is for loop se bhar chala jayega aur wo 5 bar print hi nhi hoga sirf 3 bar hoga
        break;
        printf("world\n"); //ye isrf 2 bar print hua kyuki jab compiler ne iske pehle wali if line ko dekha toh wo 3 hochuak tha aur usne pehle hi break lga di  
    }
    return 0;
}