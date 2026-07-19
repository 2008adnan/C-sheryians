#include<stdio.h>
int main(){
    int array[5] = {1,2,3,4,5};
    printf("%d\n",array);
    printf("%d\n",&array[0]); // prints the address of the first element of the array
    printf("%d\n",&array[1]);
    printf("%d\n",&array[2]);
    printf("%d\n",&array[3]);
    printf("%d\n",&array[4]);
    /*compiler jo stack mein address ko store krta hai wo first wale element ka address hota hai
    isliye array ka naam aur first element ka address same hota hai.*/
    return 0;
}